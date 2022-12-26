#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
int main(int argc,const char argv[])
{
    int fd;
    unsigned char buff[128];
    fd=open("desdfifo",O_RDONLY);
    read(fd,buff,128);
    printf("Recieved:%s",buff);
    close(fd);
    return 0;
}
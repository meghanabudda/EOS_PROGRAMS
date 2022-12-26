#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
int main(int argc , const char argv[])
{
    int fd=0;
    fd=open("desdfifo",O_WRONLY);
    write(fd,"Hello World\n",12);
    close(fd);
    return 0;
}

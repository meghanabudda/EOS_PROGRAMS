 #include<stdio.h>
 #include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<unistd.h>
int main(int arg,char const *argv[])
{
    int fd;
    fd=open("desd.txt",O_WRONLY , S_IRUSR | S_IWUSR);
    return 0;
}
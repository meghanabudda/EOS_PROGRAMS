#include<stdio.h>
#include<string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
int main(void)
{
    char write_msg[25]="HELLO";
    char wri_msg[25]="MEGHA";
    char read_msg[25];
    pid_t pid;
    int fd[2];/*this for the pipe 1*/
    int fd1[2];/*this for the pipe 2*/
    /* create the pipe*/
    if(pipe(fd)==-1)
    {
        fprintf(stderr,"Pipe failed");
        return 1;
    }
    pid =fork();
    /*fork a child process*/
    if(pid<0)
    {
        fprintf(stderr,"Fork failed");
        return 1;
    }
    if(pid>0)
    {
        /*parent process*/
        /* close the unused end of the pipe*/
        close(fd[0]);
        /* write to the pipe*/
        write(fd[1],write_msg,strlen(write_msg)+1);
        close(fd[1]);
    }
    else
    {
        close(fd[1]);
        read(fd[0],read_msg,25);
        printf("read %s ",read_msg);
        close(fd[0]);
    }
    return 0;
}


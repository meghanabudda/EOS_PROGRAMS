#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include <sys/wait.h>

int main(void)
{
    int fd,id;
    printf("BEFORE FORK\n");
    fd=fork();
    printf("AFTER FORK\n");
    if(fd==0)
    {
         //sleep(10);
        printf("This is child :\n");
        printf("After fork:\n PID=%d\n PPID=%d\n ID=%d\n",getpid(),getppid(),id);
    }
    else
    {
        wait(NULL);
        sleep(10);
        printf("After fork:\n PID=%d\n PPID=%d\n ID=%d\n",getpid(),getppid(),id);
        printf("This is parents :\n");

    }
}
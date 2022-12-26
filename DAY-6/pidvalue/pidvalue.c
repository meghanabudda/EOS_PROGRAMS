#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main(void)
{
    pid_t pid,pid1;
    /*fork a child process*/
    pid=fork();
    if(pid<0)
    {
        /*error occurred*/
        printf(stderr,"fork failed");
    }
    else if(pid==0)
    {
        pid1=getpid();
        printf("child:pid=%d\n",pid);
          printf("child:pid1=%d\n",pid1);
    }
    else 
    {
        pid1=getpid();
        printf("parents:pid=%d\n",pid);
          printf("parents:pid1=%d\n",pid1);
          wait(NULL);
    }
    return 0;

}
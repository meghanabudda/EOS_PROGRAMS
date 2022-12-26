#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main(void)
{
    pid_t pid;
    pid=fork();
    if(pid<0)
    {
        fprintf(stderr,"\nFork Failed");
        return 1;
    }
    else if(pid==0)
    {
        execlp("/bin/ls","ls",NULL);
        printf("\nLINE J");
    }
    else{
        wait(NULL);
        printf("\nchild complete");
    }
    return 0;
}
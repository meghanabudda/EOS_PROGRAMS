#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
//#include <sys/types.h>
//#include <unistd.h>

int main(int argc, char const *argv[])
{
    pid_t id; 
    printf("Before fork\n");
    fork();
    printf("After fork:\n PID=%d\n PPID=%d\n ID=%d\n",getpid(),getppid(),id);
    return 0;
}
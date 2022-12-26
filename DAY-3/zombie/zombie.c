#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include <sys/wait.h>
int main(void)
{
  int fd, a=10,b=20,id;
  printf("BEFOR FORK\n");
  fd=fork();
  printf("AFTER FORK\n");
  if(fd==0)
  {
    printf("sub=%d",b-a);
    printf("After fork:\n PID=%d\n PPID=%d\n ID=%d\n",getpid(),getppid(),id);
  }
  else
  {
    wait(NULL);
    sleep(20);
    printf("add=%d",b+a);
    printf("After fork:\n PID=%d\n PPID=%d\n ID=%d\n",getpid(),getppid(),id); 
  }
}
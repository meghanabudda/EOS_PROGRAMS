#include<stdio.h>
#include<unistd.h>
#include <sys/wait.h>
void *muls(void *data)
{
    int mu=0,a=10,b=20;
    //sleep(4);
    mu=a*b;
    printf("\nMUL=%d",mu);
}

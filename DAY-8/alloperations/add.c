#include<stdio.h>
#include<unistd.h>
#include <sys/wait.h>

void *adds(void *data)
{
    //sleep(2);
    int ad,a=10,b=20;
    ad=a+b;
    printf("\nADDITION=%d",ad);
}

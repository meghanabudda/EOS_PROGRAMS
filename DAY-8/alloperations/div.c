#include<stdio.h>
#include<unistd.h>
#include <sys/wait.h>
void *divs(void *data)
{
    //sleep(5);
    int di=0,a=10,b=5;
    di=a/b;
    printf("\nDIV=%d",di);
}

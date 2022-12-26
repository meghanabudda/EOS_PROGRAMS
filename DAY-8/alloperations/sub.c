
#include<stdio.h>
#include<unistd.h>
#include <sys/wait.h>
void *subs(void *data)
{
    //sleep(3);
    int su=0,a=10,b=20;
    su=b-a;
    printf("\nSUB=%d",su);
}

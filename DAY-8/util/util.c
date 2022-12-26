#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main(int argc,char const *argv[])
{
    printf("argc=%d\n,argv=%s\n,argv[1]=%s\n,argv[2]=%s\n",argc,argv[0],argv[1],argv[2]);
}
#include<stdio.h>
#include<string.h>
void main()
{
    char str[10];
    char str1[10];
    char str2[10];
    int a,b;
    printf("\nEnter string 1=");
    scanf("%s",&str);
     printf("\nEnter string 2=");
    scanf("%s",&str1);
    a=usrcmp(str,str1);
    printf("\ncmp=%d",a);
     b=usrlen(str);
    printf("\nlen=%d",b);
    printf("\nstrcpy=%s",usrcpy(str2,str));


}
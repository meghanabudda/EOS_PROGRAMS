#include<stdio.h>
#include<string.h>
void main()
{
    char str[10];
    char str1[10],str2[10];
     int a,b;

    printf("\nEnter a string1=");
    scanf("%s",str);
     printf("\nEnter a string2=");
    scanf("%s",str1);
   
    a=userstr(str,str1);
    printf("THE RESULT OF STRING=%d",a);
        b=userlen(str);
        printf("\nstring length is =%d",b);
    
     usercpy(str2,str);
    printf("THE RESULT OF STRING2=%s",str2);
    }
     
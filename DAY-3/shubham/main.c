#include<stdio.h>
int main(int args,char const *argv[])
{
    int s=0,d=0,m=0,a=0;
    d=divs(10,2);
    m=muls(20,3);
    a=adds(40,10);
    s=subs(13,8);
    printf("ADDITION=%d\n",a);
    printf("SUBSTRACTION=%d\n",s);
    printf("MULTIPLICATION=%d\n",m);
    printf("DIVISION=%d\n",d);

}
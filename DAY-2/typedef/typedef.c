#include<stdio.h>
#include<string.h>
#include <sys/types.h>
#include <unistd.h>
struct student{
    int id;
    char name[10];
    char names[10];
}s1,s2;
typedef struct student SHUBHAM;
void main()
{
    strcpy(s1.name,"MEGHA");
    strcpy(s2.name,"SHUBHAM");
    strcpy(s1.names,"08/03/2001");
    strcpy(s2.names,"26/07/2000");
    s1.id=07;
    s2.id=06;
    printf("NAME OF QUEEN=%s\n",s1.name);
    printf("BIRTH DATE=%s\n",s1.names);
    printf("SEAT NO=%d\n",s1.id);
    printf("NAME OF KING=%s\n",s2.name);
    printf("BIRTH DATE=%s\n",s2.names);
    printf("SEAT NO=%d\n",s2.id);
     pid_t id;
    pid_t parent_id;
    int a;
    id =getpid();
    parent_id=getppid();
    printf("PID=%d\n",id);
    printf("PPID=%d\n",parent_id);
}
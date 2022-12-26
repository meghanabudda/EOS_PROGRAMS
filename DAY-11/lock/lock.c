#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>
void* fun1(void *data);
void* fun2(void *data);
void* fun3(void *data);
pthread_mutex_t lock;
int control;
int main(int argc,char const *argv[])
{
    
    printf("for control 1 or uncontrol 0:");
    scanf("%d",&control);
    pthread_t thread1;
    pthread_t thread2;
    pthread_t thread3;
    pthread_mutex_init(&lock,NULL);
    pthread_create(&thread1,NULL,fun1,NULL);
    pthread_create(&thread2,NULL,fun2,NULL);
    pthread_create(&thread3,NULL,fun3,NULL);
    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);
     pthread_join(thread3,NULL);
    pthread_mutex_destroy(&lock);
}
void* fun1(void *data)
{
    if(control)pthread_mutex_lock(&lock);
    for(int i=0;i<300;i++)
    {
    printf("M");
    for(int j=0;j<0xfffff;j++);
   // sleep(1);
    }
    pthread_mutex_unlock(&lock);
}
void* fun2(void *data)
{
    if(control)pthread_mutex_lock(&lock);
    for(int i=0;i<300;i++)
    {
    printf("=");
    for(int j=0;j<0xfffff;j++);
   // sleep(1);
    
    }
    pthread_mutex_unlock(&lock);
}
void* fun3(void *data)
{
    if(control)pthread_mutex_lock(&lock);
    for(int i=0;i<300;i++)
    {
    printf("S");
    for(int j=0;j<0xfffff;j++);
   // sleep(1);
    
    }
    pthread_mutex_unlock(&lock);
}

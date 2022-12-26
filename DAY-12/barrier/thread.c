#include<stdio.h>
#include <pthread.h>
#include<unistd.h>
#include<semaphore.h>
pthread_barrier_t barrier4;
void *l(void *data)
{
    printf("LCD:Init start\n");
    sleep(2);
    printf("LCD:Init end\n");
    pthread_barrier_wait(&barrier4);
    printf("LCD:Functionality_start\n");    
}
void *s(void *data)
{
    printf("serial:Init start\n");
    sleep(2);
    printf("serial:Init end\n");
    pthread_barrier_wait(&barrier4);
    printf("Serial:Functionality_start\n");
}
void *t(void *data)
{
    printf("Temp:Init start\n");
    sleep(2);
    printf("Temp:Init end\n");
    pthread_barrier_wait(&barrier4);
    printf("Temp:Functionality_start\n");    
}
void *n(void *data)
{       
    printf("N/w:Init start\n");
    sleep(2);
    printf("N/w:Init end\n");
    pthread_barrier_wait(&barrier4);
    printf("N/w:Functionality_start\n");    
}
int main()
{
    pthread_t l1;
    pthread_t s1;
    pthread_t t1;
    pthread_t n1;
    pthread_barrier_init(&barrier4,NULL,4);
    pthread_create(&l1, NULL, l, NULL);
    pthread_create(&s1, NULL, s, NULL);
    pthread_create(&t1, NULL, t, NULL);
    pthread_create(&n1, NULL, n, NULL);     
    pthread_join(l1,NULL);
    pthread_join(s1,NULL);
    pthread_join(t1,NULL);
    pthread_join(n1,NULL);
    pthread_barrier_destroy(&barrier4);
    return 0;
} 
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <semaphore.h>
int a,b;
sem_t sem_lock;
sem_t sem_lock1;
void *incThread(void *data)
{
        sem_wait(&sem_lock);
        printf("Enter the values of a,b: ");
        scanf("%d,%d",&a,&b);
        sem_post(&sem_lock1);
}
void *decThread(void *data)
{
    int c=0;
        sem_wait(&sem_lock1);
        c = a+b;
        printf("sum: %d\n",c);
        sem_post(&sem_lock);
}
int main()
{
    pthread_t incId,decId;
    sem_init(&sem_lock,0,1);
    sem_init(&sem_lock1,0,0);
    pthread_create(&incId,NULL,incThread,NULL);
    pthread_create(&decId,NULL,decThread,NULL);
    sleep(1);
    pthread_join(incId,NULL);
    pthread_join(decId,NULL);
    sem_destroy(&sem_lock);
    sem_destroy(&sem_lock1);
    }

#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <semaphore.h>
int count =0;
sem_t sem_lock;
void *incThread(void *data)
{
    while(1)
    {
        sem_wait(&sem_lock);
        count++;
        printf("Inc: %d\n",count);
        sem_post(&sem_lock);
    }
}
void *decThread(void *data)
{
    while(1)
    {
        sem_wait(&sem_lock);
        count--;
        printf("Dec: %d\n",count);
        sem_post(&sem_lock);
    }
}
int main()
{
    pthread_t incId,decId;
    sem_init(&sem_lock,0,1);
    pthread_create(&incId,NULL,incThread,NULL);
    pthread_create(&decId,NULL,decThread,NULL);
    sleep(1);
    pthread_join(incId,NULL);
    pthread_join(decId,NULL);
    sem_destroy(&sem_lock);
    }

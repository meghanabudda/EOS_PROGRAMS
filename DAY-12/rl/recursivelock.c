#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
int count =0;
pthread_mutex_t lock;
pthread_mutexattr_t mutexat;
void *incThread(void *data)
{
    while(1)
    {
        pthread_mutex_lock(&lock);
        pthread_mutex_lock(&lock);
        count++;
        printf("Inc: %d\n",count);
        pthread_mutex_unlock(&lock);
        pthread_mutex_unlock(&lock);
    }
}
void *decThread(void *data)
{
    while(1)
    {
        pthread_mutex_lock(&lock);
        count--;
        printf("Dec: %d\n",count);
        pthread_mutex_unlock(&lock);
    }
}
int main()
{
    pthread_t incId,decId;
    //pthread_attr_t thread_attr;
    //pthread_attr_init(&thread_attr);
    //pthread_attr_setdetachstate(&thread_attr,PTHREAD_CREATE_DETACHED);
    pthread_mutexattr_init(&mutexat);
    pthread_mutexattr_settype(&mutexat,PTHREAD_MUTEX_RECURSIVE);
    pthread_mutex_init(&lock,&mutexat);
    pthread_create(&incId,NULL,incThread,NULL);
    pthread_create(&decId,NULL,decThread,NULL);
    sleep(1);
    //pthread_join(incId,NULL);
    //pthread_join(decId,NULL);
    //pthread_detach(incId);
    //pthread_detach(incId);
    //pthread_attr_destroy(&thread_attr);
    pthread_mutex_destroy(&lock);
    //pthread_exit(NULL);
    return 0;
}
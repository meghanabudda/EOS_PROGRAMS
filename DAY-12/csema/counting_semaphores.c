#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <semaphore.h>
int a,b,c;
sem_t sem_lock;
void *thr1(void *data)
{
        sem_wait(&sem_lock);
        printf("Enter the values of a,b in thread1: ");
        scanf("%d,%d",&a,&b);
        sem_post(&sem_lock);
}
void *thr2(void *data)
{
        sem_wait(&sem_lock);
        sleep(5);
        printf("In thread2\n");
        c = a+b;
        sem_post(&sem_lock);
}
void *thr3(void *data)
{
        sem_wait(&sem_lock);
        sleep(5);
        printf("sum in thread3: %d\n",c);
        sem_post(&sem_lock);
}
int main()
{
    pthread_t th1,th2,th3;
    sem_init(&sem_lock,0,2);
    pthread_create(&th1,NULL,thr1,NULL);
    pthread_create(&th2,NULL,thr2,NULL);
    pthread_create(&th3,NULL,thr3,NULL);
    sleep(1);
    pthread_join(th1,NULL);
    pthread_join(th2,NULL);
    pthread_join(th3,NULL);
    sem_destroy(&sem_lock);
 }   
    
    // pthread_detach(incId);
    // pthread_detach(incId);
    //pthread_attr_destroy(&thread_attr);
    //pthread_exit(NULL);
    return 0;
}

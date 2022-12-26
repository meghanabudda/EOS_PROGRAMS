#include<stdio.h>
#include <pthread.h>
#include<unistd.h>
#include<semaphore.h>
int a,b;
//pthread_mutex_t lock;
//pthread_mutexattr_t mutexat;
sem_t sem_lock, sem_lock2;
void *inc(void *data)
{
    //pthread_detach(pthread_self());
    
    ///while(1)
    {
        //pthread_mutex_lock(&lock);
        //pthread_mutex_lock(&lock);
        sem_wait(&sem_lock);
         sem_wait(&sem_lock);
        //count++;
        printf("\nEnter the values of a and b:\n");
        scanf("%d %d",&a,&b);
        sleep(3);
        //printf("\n%d and %d",a,b);
        //printf("inc:%d\n",count);
        sem_post(&sem_lock2);
        sem_post(&sem_lock2);
        //pthread_mutex_unlock(&lock);
        //pthread_mutex_unlock(&lock);
        //sleep(1);
    }
    
}
void *dec(void *data)
{
     //pthread_detach(pthread_self());
    //while(1)
    {
        //pthread_mutex_lock(&lock);
        sem_wait(&sem_lock2);
        printf("VALUES OF A AND B: %d %d",a,b);
        //scanf("%d %d,&a,&b");
        //sleep(3);
        
        //count--;
        //printf("dec:%d\n",count);
        sem_post(&sem_lock);
          //pthread_mutex_unlock(&lock);
        //sleep(1);
    }
    
}
int main()
{
     
 pthread_t thread_1;
 pthread_t thread_2;
 //pthread_attr_t thread_attr;
 //pthread_attr_init(&thread_attr);
 //pthread_attr_setdetachstate(&thread_attr,PTHREAD_CREATE_DETACHED);
 // sleep(2);
 //pthread_mutex_init(&lock,&mutexat);
 //pthread_mutexattr_settype(&mutexat,PTHREAD_MUTEX_RECURSIVE);
 //pthread_mutexattr_init(&mutexat);
 sem_init(&sem_lock,0,2);
 //sem_init(&sem_lock2,0,0);
 printf("before thread creation\n");
 pthread_create(&thread_1, NULL, inc, NULL);
 pthread_create(&thread_2, NULL, dec, NULL);
      
       
  //  pthread_detach(thread_1);
  //pthread_mutex_destroy(&lock);
  pthread_join(thread_1,NULL);
  pthread_join(thread_2,NULL);
  printf("\nafter thread creation\n");
  sem_destroy(&sem_lock);
  // pthread_exit(NULL);
  //sleep(1);
    

    return 0;
}
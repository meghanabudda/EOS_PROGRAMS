#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
pthread_rwlock_t rw_lock;
int a,b;
void *thread1(void *data)
{
    pthread_rwlock_wrlock(&rw_lock);
    printf("Enter the values of a and b\n");
    scanf("%d %d",&a,&b);
    sleep(3);
    pthread_rwlock_unlock(&rw_lock);
}
void *thread2(void *data)
{
    pthread_rwlock_rdlock(&rw_lock);
    printf("The values of a and b in thread2 are %d %d\n",a,b);
    pthread_rwlock_unlock(&rw_lock);
}
void *thread3(void *data)
{
    pthread_rwlock_rdlock(&rw_lock);
    printf("The values of a and b in thread3 are %d %d\n",a,b);
    pthread_rwlock_unlock(&rw_lock);
}
int main()
{
    pthread_t t1,t2,t3;
    pthread_rwlock_init(&rw_lock,NULL);
    pthread_create(&t1,NULL,thread1,NULL);
    pthread_create(&t2,NULL,thread2,NULL);
    pthread_create(&t3,NULL,thread3,NULL);
    sleep(3);
    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
    pthread_join(t3,NULL);
    return 0;
}
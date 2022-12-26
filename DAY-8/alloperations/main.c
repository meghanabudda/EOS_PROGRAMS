#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include"task.h"
int main(int args,char const *argv[])
{   pthread_t thread1;/*THREAD */
    pthread_t thread2;
    pthread_t thread3;
    pthread_t thread4;
    int thread1_ret;
    int thread2_ret;
    int thread3_ret;
    int thread4_ret;
    
  
    thread1_ret=pthread_create(&thread1,NULL,adds,NULL);
    thread2_ret=pthread_create(&thread2,NULL,subs,NULL);
    thread3_ret=pthread_create(&thread3,NULL,muls,NULL);
    thread4_ret=pthread_create(&thread4,NULL,divs,NULL);  
     
       
     
    if(thread1_ret==0)
    {
        printf("\nTHREAD:1 CREATED\n");
    }
    else
    {
         printf("\nTHREAD:1 NOT CREATED\n");
    }
    if(thread2_ret==0)
    {
        printf("\nTHREAD:2 CREATED\n");
    }
    else
    {
         printf("\nTHREAD:2 NOT CREATED\n");
    }
    if(thread3_ret==0)
    {
        printf("\nTHREAD:3 CREATED\n");
    }
    else
    {
         printf("\nTHREAD:3 NOT CREATED\n");
    }
    if(thread4_ret==0)
    {
        printf("\nTHREAD:4 CREATED\n");
    }
    else
    {
         printf("\nTHREAD:4 NOT CREATED\n");
    }


    pthread_join(thread1,NULL);     
    pthread_join(thread2,NULL);  
    pthread_join(thread3,NULL);  
    pthread_join(thread4,NULL); 


return 0;
}
/*pthread:-exit,detach,self,equal*/
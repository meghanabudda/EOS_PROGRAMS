#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
void *add(void *data)
{
    //sleep(2);
    int a=10,b=20,sum;
    sum=a+b;
    printf("ADDITON=%d\n",sum);
   
    
}
void *sub(void *data)
{
    //sleep(3);
    int a=10,b=20,diff;
    diff=b-a;
    printf("SUBS=%d\n",diff);
    
}
void *mul(void *data)
{
    //sleep(4);
    int a=10,b=20,in;
    in=a*b;
    printf("MUL=%d\n",in);
    
}
void *div(void *data)
{
   // sleep(5);
    int a=10,b=20,di;
    di=b/a;
    printf("DIV=%d\n",di);
    
}
int main()
{
    printf("\nBEFORE THREAD\n");
    pthread_t thread_1; 
     pthread_t thread_2; 
      pthread_t thread_3; 
       pthread_t thread_4;
             pthread_create(&thread_4,NULL,div,NULL); 
                pthread_create(&thread_3,NULL,mul,NULL);
                    pthread_create(&thread_2,NULL,sub,NULL);
              
                        pthread_create(&thread_1,NULL,add,NULL);
            
        
                
          
      
            pthread_join(thread_1,NULL);
              pthread_join(thread_2,NULL);
              pthread_join(thread_3,NULL);
               pthread_join(thread_4,NULL);
              
               printf("\nBEFORE THREAD");
}
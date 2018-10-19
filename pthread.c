/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void * ADD(void *arg)
{
    int start = {int}arg;
    int end = start + size;
    int sum=0;
    for(int i=0; i<end; i++)
    {
        sum= sum+data[i];
    }
    return((void*)sum);
}

int main()
{
   int status_t1, status_t2, status_t3, status_t4, status_t5, status_t6, status_t7, status_t8, status_t9, status_t10;
   pthread_t thread_t1, thread_t2, thread_t3, thread_t4, thread_t5, thread_t6, thread_t7, thread_t8, thread_t9, thread_t10;
   
   for(int i=0; i<1000; i++)
   {
       data[i] = i;
   }
   
   pthread_create(&thread_t1,NULL,ADD,(void*)(0*size)$);
   pthread_create(&thread_t2,NULL,ADD,(void*)(1*size)$);
   pthread_create(&thread_t3,NULL,ADD,(void*)(2*size)$);
   pthread_create(&thread_t4,NULL,ADD,(void*)(3*size)$);
   pthread_create(&thread_t5,NULL,ADD,(void*)(4*size)$);
   pthread_create(&thread_t6,NULL,ADD,(void*)(5*size)$);
   pthread_create(&thread_t7,NULL,ADD,(void*)(6*size)$);
   pthread_create(&thread_t8,NULL,ADD,(void*)(7*size)$);
   pthread_create(&thread_t9,NULL,ADD,(void*)(8*size)$);
   pthread_create(&thread_t10,NULL,ADD,(void*)(9*size)$);
   
   pthread_join(thread_t1,(void**)&status_t1);
   pthread_join(thread_t2,(void**)&status_t2);
   pthread_join(thread_t3,(void**)&status_t3);
   pthread_join(thread_t4,(void**)&status_t4);
   pthread_join(thread_t5,(void**)&status_t5);
   pthread_join(thread_t6,(void**)&status_t6);
   pthread_join(thread_t7,(void**)&status_t7);
   pthread_join(thread_t8,(void**)&status_t8);
   pthread_join(thread_t9,(void**)&status_t9);
   pthread_join(thread_t10,(void**)&status_t10);
   
   int sum=0;
   sum = status_t1 + status_t2 + status_t3 + status_t4 + status_t5 + status_t6 + status_t7 + status_t8 + status_t9 + status_t10;
   printf("\n Sum %d\n", sum);
   
return 0;
   }
}


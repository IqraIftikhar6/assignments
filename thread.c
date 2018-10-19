#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int balance = 0;

void * inc(void * arg)
{
    for(int i=0; i<10000; i++)
    {
        balance++;
    }
    return NULL;
}

void * dec(void * arg)
{
    for(int i=0; i<10000; i++)
    {
        pthread_mutex_lock(&mut);
        balance--;
        pthread_mutex_unlock(&mut);
    }
    return NULL;
}


int main()
{
     char *msg = "hello programmer... the thread version";
    pthread_t athread;
    pthread_t athread2;
    
    pthread_create(&athread, NULL,inc,NULL)
    pthread_create(&athread2, NULL,dec,NULL)
    
    pthread_join(athread,NULL);
    pthread_join(athread,NULL)
    return 0;
return 0;
}

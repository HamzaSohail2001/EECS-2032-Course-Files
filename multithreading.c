#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>




// this function return a 
void *func(void *var){

sleep(2);
printf("we are using thread\n");

}


int main() 
{

    // used to identify the thread id
    pthread_t t1;
    printf("Before using threading \n");
    // this is used to create the thread 
    // first parameter is the id to the function, 
    // second parapmeter his argument specifies the attributes for the new thread.
    //  Attributes include things like stack size, scheduling policy, and priority, Passing NULL means that default attributes will be used, which are suitable for most applications. 
    // third parapmeter is the function that needs to be executed 
    // fourth parapmeter his argument is a pointer to data that will be passed as the argument to the start routine (func). 
    // Since you provided NULL, no data will be passed to the start routine. 
    pthread_create(&t1, NULL, &func, NULL);
    pthread_join(t1, NULL);
    printf("After threading \n");

}
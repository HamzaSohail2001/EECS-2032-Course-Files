#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>


int a = 0;
void *func(void *var){

// (int *) is a type cast operator. It converts the value of var to a pointer to an integer 
// int *id declares a variable named id of type pointer to an integer (int *).
// var is a variable of type void *. A void * pointer is a generic pointer type that can point to data of any type. 
    int *id = (int *)var ;
    static int b = 0;
    b=7;
    a=7;
    printf("thread id is: %d \n", *id);
    printf("value of static variable is: %d \n", b);
    printf("value of global variable is: %d \n", a);
}


int main() 
{

    pthread_t t1;
    for(int i=0; i <3; i++){
        pthread_create(&t1, NULL, func, (void*)&t1);
    };
    pthread_exit(NULL);
    return 0;

}
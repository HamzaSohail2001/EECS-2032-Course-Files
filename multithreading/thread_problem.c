#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

int primes[10] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29 };

void* routine(void* arg) { // void * means it can be of any type 
//In summary, void* is used to declare a function that returns a pointer
// to void and takes a pointer to void as an argument. This allows for flexibility in working with different types of data.
    int index = *(int*)arg; // it type cast the arg into int
    printf("%d ", primes[index]);
    free(arg);
}

int main(int argc, char* argv[]) {
    pthread_t th[10];
    int i;
    for (i = 0; i < 10; i++) {
        int* a = malloc(sizeof(int));
        *a = i;
        if (pthread_create(&th[i], NULL, &routine, a) != 0) {
            perror("Failed to created thread");
        }
    }
    for (i = 0; i < 10; i++) {
        if (pthread_join(th[i], NULL) != 0) {
            perror("Failed to join thread");
        }
    }
    
    return 0;
}
/*
int* a = malloc(sizeof(int));:
malloc(sizeof(int)): This function call dynamically allocates memory on the heap for storing an integer. sizeof(int) returns the size of an integer in bytes, and malloc allocates memory of that size.
int* a: This declares a pointer a that can point to an integer. The int* before a indicates that a is a pointer to an integer.
int* a = malloc(sizeof(int));: This line combines both the memory allocation and the pointer declaration. It allocates memory on the heap to store an integer and assigns the address of the allocated memory to the pointer a.
So, after this line executes, a holds the memory address of the dynamically allocated memory block, which is capable of storing an integer.

*a = i;:
*a: The asterisk (*) is the dereference operator. It is used to access or modify the value pointed to by a pointer. In this case, *a dereferences the pointer a, giving access to the memory location it points to.
= i;: This assigns the value of i to the memory location pointed to by a.
So, the combined effect of these two lines is that the value of i is stored in the dynamically allocated memory location pointed to by a. This allows us to store the value of i in memory that persists beyond the scope of the current function, as the memory was allocated dynamically on the heap.

*/
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

// Array of the first ten prime numbers
int primes[10] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29 };

// Thread routine
void* routine(void* arg) {
    // Cast the argument to int pointer and dereference it to get the index
    int index = *(int*)arg;
    
    // Initialize a variable to store the sum
    int sum = 0;
    
    // Iterate over the next 5 prime numbers starting from the index
    for (int j = 0; j < 5; j++) {
        sum += primes[index + j]; // Add the prime numbers to the sum
    }
    
    // Print the local sum calculated by the thread
    printf("Local sum: %d\n", sum);
    
    // Store the local sum back to the memory location pointed by the argument
    *(int*)arg = sum;
    
    // Return the argument (now containing the local sum) as the thread's exit value
    return arg;
}

// Main function
int main(int argc, char* argv[]) {
    // Array to hold thread identifiers
    pthread_t th[2];
    
    // Create two threads
    for (int i = 0; i < 2; i++) {
        // Allocate memory for an integer to store the index for each thread
        int* a = malloc(sizeof(int));
        
        // Calculate the starting index for each thread
        *a = i * 5;
        
        // Create a thread, passing the index as the argument
        if (pthread_create(&th[i], NULL, &routine, a) != 0) {
            perror("Failed to create thread");
        }
    }
    
    // Variable to store the global sum
    int globalSum = 0;
    
    // Wait for each thread to finish and collect the exit value (local sum)
    for (int i = 0; i < 2; i++) {
        int* r;
        if (pthread_join(th[i], (void**) &r) != 0) {
            perror("Failed to join thread");
        }
        // Accumulate the local sums to calculate the global sum
        globalSum += *r;
        // Free the memory allocated for the exit value
        free(r);
    }
    
    // Print the global sum
    printf("Global sum: %d\n", globalSum);
    
    return 0;
}

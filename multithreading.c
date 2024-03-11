#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void* routine() {
    printf("Hello from threads\n");
    sleep(3);
    printf("Ending thread\n");
}

int main(int argc, char* argv[]) {
    pthread_t p1, p2;
    // here we first intialize the two threads
    if (pthread_create(&p1, NULL, &routine, NULL) != 0) {
        // we create the the thread, first para would be the p_thread we have intilziwed, then 
        // second para would be Null so it uses default config,
        // third para would be the function we would call
        // fourth would be any argumetns for the function we will be passing
        return 1;
    }
    if (pthread_create(&p2, NULL, &routine, NULL) != 0) {
        return 2;
    }
    if (pthread_join(p1, NULL) != 0) {
        return 3;
        // we wait for the exectuon of the thread
        // first para would be the return of the pthread
        // second para would be result of the exectution,or where we are foing to store the result, in our case we leave it to null
    }
    if (pthread_join(p2, NULL) != 0) {
        return 4;
    }
    return 0;
}
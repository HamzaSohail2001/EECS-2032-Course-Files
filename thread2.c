#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>

int mails = 0;

void* routine() {
    for (int i = 0; i < 100000; i++) {
        mails++;

    }
}

int main(int argc, char* argv[]) {
    pthread_t p1, p2, p3, p4;
    if (pthread_create(&p1, NULL, &routine, NULL) != 0) {
        return 1;
    }
    if (pthread_create(&p2, NULL, &routine, NULL) != 0) {
        return 2;
    }
    if (pthread_join(p1, NULL) != 0) {
        return 3;
    }
    if (pthread_join(p2, NULL) != 0) {
        return 4;
    }
    printf("Number of mails: %d\n", mails);
    return 0;
}

// in this code we look towards the race problem and try to figure on how to solve it 
//a race condition occurs when multiple threads or processes 
//access shared data or resources in a way that leads to inconsistent 
//or unexpected behavior. This problem arises due to the non-deterministic
// scheduling of threads by the operating system, causing the execution order of threads to be unpredictable
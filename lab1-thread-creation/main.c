#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <string.h>

void *thread_body(void *param) {
    for (int i = 0; i < 10; i++)
        printf("Child string %d\n", i);
}

/*
 * creates thread with default attributes and no parameters
 * prints ten lines and makes pthread_exit()
 *
 */
int main(int argc, char *argv[]) {
    pthread_t thread;
    int code;

    code = pthread_create(&thread, NULL, thread_body, NULL);
    if (code != 0) {
        char buf[256];
        strerror_r(code, buf, sizeof buf);
        fprintf(stderr, "%s: creating thread: %s\n", argv[0], buf);
        exit(1);
    }
    
    for (int i = 0; i < 10; i++)
        printf("Parent string %d\n", i);

    pthread_exit(EXIT_SUCCESS);
}
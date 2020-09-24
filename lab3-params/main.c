#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <string.h>
#define THREAD_NUM 4
#define STR_NUM 4
void *string_printer(void *param) {
    for (int i = 0; i < STR_NUM; i++)

    return EXIT_SUCCESS;
}

/*
 * creates 4 threads with default attributes and string order
 * prints lines and
 *
 */
int main(int argc, char *argv[]) {
    pthread_t thread[THREAD_NUM];
    int code;
    for (int i = 0; i < THREAD_NUM; ++i) {
        
        code = pthread_create(thread+i, NULL, string_printer, NULL);
        if (code != 0) {
            char buf[256];
            strerror_r(code, buf, sizeof buf);
            fprintf(stderr, "%s: creating thread: %s\n", argv[0], buf);
            exit(EXIT_FAILURE);
        }
    }

    pthread_exit(EXIT_SUCCESS);
}


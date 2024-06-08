#include <stdio.h>
#include <pthread.h>
#include <malloc.h>
#include <sched.h>
#include <stdlib.h>
#include <string.h>

void print_message_function(void *ptr);

typedef struct str_thdata {
    int thread_no;
    char message[100];
} thdata;

int main() {
    pthread_t thread1, thread2;
    thdata data1, data2;

    data1.thread_no = 1;
    strcpy(data1.message, "Hello");

    data2.thread_no = 2;
    strcpy(data2.message, "Hi");

    pthread_create(&thread1, NULL, (void *) print_message_function, (void *) &data1);
    pthread_create(&thread2, NULL, (void *) print_message_function, (void *) &data2);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    exit(0);
}

void print_message_function(void *ptr) {
    thdata *data;
    data = (thdata *) ptr; 
    printf("Thread %d says %s\n", data->thread_no, data->message);
    pthread_exit(0);
}





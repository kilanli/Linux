#include<pthread.h>
#include<stdio.h>

void * thread_process() {
printf("thread islemi\n");
pthread_exit(0);
}

main(){
pthread_t my_thread;

pthread_create(&my_thread,NULL,thread_process,NULL);

pthread_join(my_thread,NULL);

}

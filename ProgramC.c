#include<stdio.h>
#include <unistd.h>
#include <sys/types.h>
main(void){
printf("Process PID:  %d\n",getpid());
printf("Parent Process PID:  %d\n",getppid());
printf("User ID:  %d\n",getuid());

}

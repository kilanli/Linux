#include<sched.h>
#include<stdio.h>
#include<malloc.h>

#define HAFIZA_BOYUTU 950

int my_process(){
printf("process çalışıyor\n");
return 1;
}
int main(){
int pid;
void *hafiza;
hafiza=malloc(HAFIZA_BOYUTU);
if(hafiza==0)
{
printf("hafiza tahsis hatası \n");
return(-1);
}

pid=clone(&my_process,(char*) hafiza+HAFIZA_BOYUTU ,0,0 );

wait(pid,0,0);
free(hafiza);
}



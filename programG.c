#include <stdio.h>
#include <stdlib.h>
#include <signal.h>


void catch_sigint(){
printf("Sigint signal is catched..\n");
}

main(){
while(1){
if(signal(SIGINT,catch_sigint)==SIG_ERR){
printf("ERROR..\n");
}
}

}

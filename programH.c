#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void mysigint(int signum) {
    printf("I CAUGHT SIGINT SIGNAL\n");
    return;
}

void mysighup(int signum) {
    printf("I CAUGHT THE SIGHUP SIGNAL\n");
    return;
}

void mysigterm(int signum) {
    printf("I CAUGHT THE SIGTERM SIGNAL\n");
    return;
}

int main() {
    if (signal(SIGINT, mysigint) == SIG_ERR)
        printf("Cannot handle SIGINT..\n");
    if (signal(SIGHUP, mysighup) == SIG_ERR)
        printf("Cannot handle SIGHUP..\n");
    if (signal(SIGTERM, mysigterm) == SIG_ERR)
        printf("Cannot handle SIGTERM..\n");
	if (signal(SIGKILL, mysigterm) == SIG_ERR)
        printf("Cannot handle SIGKILL..\n");
    // Sonsuz döngü
    while (1);

    return 0;
}




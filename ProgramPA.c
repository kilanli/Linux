#include <stdio.h>
#include <unistd.h>
 main(void)
{
char *cmd_1[]={"ls",NULL,NULL};
char *cmd_2[]={"ls","-l",NULL};
char *cmd_3[]={"ls","-al",NULL};

execvp("ls",cmd_1);

execvp("ls",cmd_2);

execvp("ls",cmd_3);


}

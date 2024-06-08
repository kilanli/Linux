#include<stdio.h>
void main(){
FILE *fp;

fp=fopen("MYFILE.txt","a");
fprintf(fp,"%s\n","Hello World, Where there is will, there is a way");
fclose(fp);



}

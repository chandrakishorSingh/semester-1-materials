#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>
#include <string.h>

void concat(char* s1, char* s2, char* ns) {
    strcpy(ns, s1);
    strcat(ns, s2);
}

int main(int argc, char** argv){ 

    char* s1 = "./sort1 ";
    char* s2 = argv[1];
    char s3[strlen(s1) + strlen(s2)];
    concat(s1, s2, s3);

    execl("/usr/bin/xterm", "xterm", "-hold",  "-e", s3,  NULL);

  return 0;
}

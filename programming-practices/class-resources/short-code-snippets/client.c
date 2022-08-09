#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>

int main(){
  int a = 30;
  char aa[5];
  int b = 20;
  char bb[5];
  pid_t child;
  int status;

  sprintf(aa, "%d", a);
  sprintf(bb, "%d", b);
  
  child = fork();
  if(child==0)
    execl("./server.out","server",aa,bb,"+",(char *)NULL);
    
  wait(&status);

  printf("answer=%d",WEXITSTATUS(status));  
  
  
}

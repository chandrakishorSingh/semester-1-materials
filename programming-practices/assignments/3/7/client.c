#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>

int main(){
  char aa[5];
  char bb[5];
  pid_t child;
  int status;

  int a, b;
  char op[5];;

  while (1) {
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%s", op);

    sprintf(aa, "%d", a);
    sprintf(bb, "%d", b);
  
    child = fork();
    if(child==0)
      execl("./server.out","server",aa,bb,op,(char *)NULL);
    
    wait(&status);

    printf("answer=%d\n", (int)WEXITSTATUS(status));  
  }

  
  
  
}

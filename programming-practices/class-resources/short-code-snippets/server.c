#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>

int main(int argc,char *argv[]){
  printf("In child\n");
  
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);

  if(argv[3][0] == '+') {
    printf("child=%d\n",a+b);
    exit(a+b);
  }
  else {
    printf("child=%d\n",a-b);
    exit(a-b);
  }
}

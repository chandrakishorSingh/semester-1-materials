#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(){

    int pipefd[2];
    int pid;
    char recv[32];
    int status;
 
    pipe(pipefd);

    switch(pid=fork()){

    case -1:perror("fork");
            exit(1);

    case 0:				      /* in child process */
          close(pipefd[1]);		      /* close unnecessary pipefd  */
          FILE *in = fdopen(pipefd[0],"r");   /* open file descriptor as a stream  */
          close(0);
          dup2(pipefd[0],0);
          close(pipefd[0]);
          //scanf("%[^\n]s",recv); 
          //printf("%s\n", recv);
          execlp("grep","","Hello",NULL);
          break;

   default:				      /* in parent process */	
          close(pipefd[0]);		      /* close unnecessary pipefd  */
          FILE *out = fdopen(pipefd[1],"w");   /* open file descriptor as a stream  */
          fprintf(out,"Hello Hello\nWorld world\n");       /* write to out stream */
          //wait(&status);
          break;
   }

}

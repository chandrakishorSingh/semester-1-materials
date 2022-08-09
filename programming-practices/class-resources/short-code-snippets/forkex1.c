#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
#include<fcntl.h>

#include<wait.h>


int main(){
	pid_t parent, child;
	int status,fd;

	printf("Parent: I am parent with id %d\n",getpid());

	child = fork();
	if(child<0){
		printf("fork error\n");
		return 1;
	}
	
	if(child==0){  /* child code */
	  sleep(10);
	  close(1);
	  fd = open("temp.txt",O_WRONLY | O_CREAT,0777);
	  printf("Child: I am child with id %d, my parent %d, calling\n",getpid(), getppid());	
		exit(20);
	} else {  /* parent code  */
	  	child=wait(0);
 		printf("Parent: I am parent with id %d, child exited with %d\n", getpid(),child); //WEXITSTATUS(status));	
	}
	return 1;
}

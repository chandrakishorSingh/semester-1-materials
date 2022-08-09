#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>

#include<wait.h>


int main(){
	pid_t parent, child;
	int status;

	printf("Parent: I am parent with id %d\n",getpid());

	child = fork();
	if(child<0){
		printf("fork error\n");
		return 1;
	}
	
	if(child==0){  /* child code */
		//char *cmd[] = {"firefox","http://www.iiita.ac.in/",(char*)0};
		char *cmd[] = {"ls","-l",(char*)0};		
		printf("Child: I am child with id %d, my parent %d, calling %s\n",getpid(), getppid(),cmd[0]);	
	/*	sleep(10); */
		//execv("/usr/bin/firefox",cmd); 
		execv("/bin/ls",cmd);
		exit(20);
	} else {  /* parent code  */
		child=wait(0);
 		printf("Parent: I am parent with id %d, child exited with %d\n", getpid(),child); //WEXITSTATUS(status));	
	}

	return 1;
}

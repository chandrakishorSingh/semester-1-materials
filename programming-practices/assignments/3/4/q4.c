#include<stdio.h>
#include<sys/wait.h>
#include<unistd.h>

int main() {
	fork();
	fork();
	printf("My process id is %d and my parent process id is %d\n", getpid(), getppid());
	return 0;
}

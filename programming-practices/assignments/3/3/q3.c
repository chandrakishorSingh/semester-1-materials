#include<unistd.h>
#include<stdio.h>
#include<sys/wait.h>
#include<stdlib.h>

int main() {
	pid_t childId;
	int childStatus;
	if (fork() == 0)
		exit(0);
	else
		childId = wait(&childStatus);

	printf("Parent has id %d\n", getpid());
	printf("Child has id %d\n", childId);
	printf("Child has status %d\n", childStatus);
	return 0;
}

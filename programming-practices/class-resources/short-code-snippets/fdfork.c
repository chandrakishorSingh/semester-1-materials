#include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>

void main(int argc, char *argv[])
{
        int fd;
        fd = open("temp.txt", O_RDWR,0777);
        fork();
        write(fd, "hello", 5);
        exit(1);
}

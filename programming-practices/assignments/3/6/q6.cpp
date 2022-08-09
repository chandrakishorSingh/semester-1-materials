#include<stdio.h>
#include<sys/wait.h>
#include<unistd.h>
#include<stdlib.h>
#include<fstream>
#include<iostream>

using namespace std;

int main() {
	for(int i = 1; i <= 10; i++){
		fork();
	}

	ofstream file;
	file.open("management.txt", ofstream::out | ofstream::trunc);
	file << 1024;
	file.close();
	return 0;
}

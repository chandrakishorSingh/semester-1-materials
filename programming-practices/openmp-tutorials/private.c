#include<stdio.h>

int main(int argc, char** argv) {
	int th_id, nthreads;

	#pragma omp parallel private(th_id)
	{
		th_id = omp_get_thread_num();
		printf("Hello World from thread %d\n", th_id);
	}
}

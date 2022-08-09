#include<stdio.h>
#include<omp.h>

#define N 10

int main() {
	int a[N], b[N], c[N];
	int i;

	for (int i = 0; i < N; i++) {
		a[i] = i * 2;
		b[i] = i * 3;
	}

	#pragma omp parallel shared(a, b, c) private(i)
	{
		#pragma omp for
		for (i = 0; i < N; i++) {
			c[i] = a[i] + b[i];
			printf("a[%d] = %d by thread id = %d\n", i, c[i], omp_get_thread_num());
		}
	}
}

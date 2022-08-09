int fibo(int n) {
	if (n == 1 || n == 0)
		return 1;
	return fibo(n - 1) + fibo(n - 2);
}

int main() {
	int r = fibo(5);
	return 0;
}

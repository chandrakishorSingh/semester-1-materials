int fact(int n) {
	if (n == 1)
		return 1;
	return n * fact(n - 1);
}

int main() {
	int i = 4;
	int result = fact(i);
	return 0;
}

int sum(int a, int b, int c, int& d) {
	return a + b + c + d;
}

int main() {
	int x = 2;
	int y = 3;
	int z = 5;
	int w = 7;
	int& p = w;
	int r = sum(x, y, z, p);
	return 0;
}

#include<iostream>
#include<vector>
#include<fstream>

using namespace std;

int main() {
	ifstream file("input.txt");
	if (!file.is_open()) {
		cout << "error while opening the file input.txt" << endl;
		return -1;
	}

	int n;
	file >> n;
	vector<vector<int>> matrix(n, vector<int>(n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			file >> matrix[i][j];
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

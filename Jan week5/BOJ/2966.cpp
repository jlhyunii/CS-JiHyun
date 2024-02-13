#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	char arr1[100]; 
	char arr2[100]; 
	char arr3[100]; 
	char answer[100]; 

	for (int i = 0; i < N; i++) {
		cin >> answer[i];
	}

	for (int i = 0; i < N; i++) { 
		if (i % 3 == 0) {
			arr1[i] = 'A';
		}
		else if (i % 3 == 1) {
			arr1[i] = 'B';
		}
		else {
			arr1[i] = 'C';
		}
	}

	for (int i = 0; i < N; i++) { 
		if (i % 4 == 1) {
			arr2[i] = 'A';
		}
		else if (i % 2 == 0) {
			arr2[i] = 'B';
		}
		else {
			arr2[i] = 'C';
		}
	}

	for (int i = 0; i < N; i++) { 
		if (i % 6 == 0 || i % 6 == 1) {
			arr3[i] = 'C';
		}
		else if (i % 6 == 2 || i % 6 == 3) {
			arr3[i] = 'A';
		}
		else if (i % 6 == 4 || i % 6 == 5) {
			arr3[i] = 'B';
		}
	}

	int c1 = 0;
	int c2 = 0;
	int c3 = 0;
	for (int i = 0; i < N; i++) {
		if (answer[i] == arr1[i]) {
			c1++;
		}
		if (answer[i] == arr2[i]) {
			c2++;
		}
		if (answer[i] == arr3[i]) {
			c3++;
		}
	}

	int max = -1;
	if (max < c1) {
		max = c1;
	}
	if (max < c2) {
		max = c2;
	}
	if (max < c3) {
		max = c3;
	}

	cout << max << endl;
	if (max == c1) {
		cout << "Adrian" << endl;
	}
	if (max == c2) {
		cout << "Bruno" << endl;
	}
	if (max == c3) {
		cout << "Goran" << endl;
	}
}
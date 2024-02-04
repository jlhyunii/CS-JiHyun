#include <iostream>
using namespace std;

char arr[51][51];
int N, candy;

void f() {
	char c;

	for (int i = 0; i < N; i++) { //За
		int cnt = 1;
		c = arr[i][0];
		for (int j = 1; j < N; j++) {
			if (arr[i][j] == c) {
				cnt++;
			}
			else {
				cnt = 1;
			}
			c = arr[i][j];
			if (cnt > candy) {
				candy = cnt;
			}
		}
	}

	for (int j = 0; j < N; j++) { //ї­ 
		int cnt = 1;
		c = arr[0][j];
		for (int i = 1; i < N; i++) {
			if (arr[i][j] == c) {
				cnt++;
			}
			else {
				cnt = 1;
			}
			c = arr[i][j];
			if (cnt > candy) {
				candy = cnt;
			}
		}
	}
}

int main() {
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < N; i++) { //За
		for (int j = 0; j < N - 1; j++) {
			swap(arr[i][j], arr[i][j + 1]);
			f();
			swap(arr[i][j], arr[i][j + 1]);
		}
	}

	for (int j = 0; j < N; j++) {
		for (int i = 0; i < N - 1; i++) {
			swap(arr[i][j], arr[i + 1][j]);
			f();
			swap(arr[i][j], arr[i + 1][j]);
		}
	}

	cout << candy;
}
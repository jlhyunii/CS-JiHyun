#include <iostream>
using namespace std;

int arr[1000];

bool tr(int n) {
	for (int i = 1; i < 45; i++) {
		for (int j = 1; j < 45; j++) {
			for (int k = 1; k < 45; k++) {
				if (arr[i] + arr[j] + arr[k] == n) {
					return true;
				}
			}
		}
	}
	return false;
}

int main() {
	int T, K;
	cin >> T;

	for (int i = 1; i <= 1000; i++) {
		arr[i] = i * (i + 1) / 2;
	}

	for (int i = 0; i < T; i++) { //자연수 T개 입력
		cin >> K;
		cout << tr(K) << endl;
	}
}
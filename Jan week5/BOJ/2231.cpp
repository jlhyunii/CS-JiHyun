#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int M = 0;

	for (int i = 1; i < N; i++) {
		int sum = 0;
		int num = i;
		while (num != 0) {
			sum += num % 10;
			num /= 10;
		}
		if (sum + i == N) {
			M = i;
			break;
		}
	}
	cout << M << endl;
}
#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int count = 0;
	for (int i = 1; i <= N; i *= 10) {
		count += N - i + 1;
	}

	cout << count << endl;
}
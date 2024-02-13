#include <iostream>
using namespace std;

int T[20], P[20], M[20];

int main() {
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> T[i] >> P[i];
	}

	for (int i = N; i > 0; i--) {
		if (i + T[i] > N + 1) {
			M[i] = M[i + 1];
		}
		else {
			M[i] = max(M[i + 1], P[i] + M[i + T[i]]);
		}
	}

	cout << M[1] << endl;
}
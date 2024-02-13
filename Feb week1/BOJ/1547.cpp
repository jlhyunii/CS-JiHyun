#include <iostream>
using namespace std;

int main() {
	int M, X, Y;
	cin >> M;

	int ball = 1;

	for (int i = 0; i < M; i++) {
		cin >> X >> Y;

		if (X == ball) {
			ball = Y;
		}
		else if (Y == ball) {
			ball = X;
		}
	}

	cout << ball << endl;
}
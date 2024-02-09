#include <iostream>
using namespace std;

int h[7];
int w[7];

int area() {
	int _min = 0;
	int mh, mw;

	for (int i = 1; i <= 6; i++) {
		for (int j = 1; j <= 6; j++) {
			for (int k = 1; k <= 6; k++) {
				if (i % 3 == j % 3 || j % 3 == k % 3 || k % 3 == i % 3 || i == j || j == k || k == i) {
					continue;
				}

				mh = h[i] + h[j] + h[k];
				mw = max(max(w[i], w[j]), w[k]);

				if (_min == 0) {
					_min = mh * mw;
				}
				else {
					_min = min(_min, mh * mw);
				}

				mh = h[i] + max(h[j], h[k]); 
				mw = max(w[i], w[j] + w[k]); 
				_min = min(_min, mh * mw);
			}
		}
	}
	return _min;
}

int main() {
	int T, A, B;
	cin >> T;

	int sum = 0;

	while (T--) {
		for (int i = 1; i <= 3; i++) {
			cin >> w[i] >> h[i];
			w[i + 3] = h[i];
			h[i + 3] = w[i];
		}

		cout << area() << endl;
	}

}
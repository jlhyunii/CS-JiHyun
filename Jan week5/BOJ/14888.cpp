#include <iostream>
using namespace std;

int N;
int arr[12];
int op[4];
int _max = -1000000001;
int _min = 1000000001;

void f(int r, int idx) { 
	if (idx == N) {
		if (r > _max) {
			_max = r;
		}
		if (r < _min) {
			_min = r;
		}
		return;
	}

	for (int i = 0; i < 4; i++) {
		if (op[i] > 0) {
			op[i]--;
			if (i == 0) { 
				f(r + arr[idx], idx + 1);
			}
			else if (i == 1) { 
				f(r - arr[idx], idx + 1);
			}
			else if (i == 2) { 
				f(r * arr[idx], idx + 1);
			}
			else { 
				f(r / arr[idx], idx + 1);
			}
			op[i]++;
		}
	}
	return;
}

int main() {
	cin >> N;

	for (int i = 0; i < N; i++) { 
		cin >> arr[i];
	}

	for (int i = 0; i < 4; i++) { 
		cin >> op[i];
	}

	f(arr[0], 1);

	cout << _max << endl;
	cout << _min << endl;
}
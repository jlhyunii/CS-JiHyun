#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int arr[50][2];
	int rank[50];

	for (int i = 0; i < N; i++) {
		cin >> arr[i][0] >> arr[i][1];
		rank[i] = 1;
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1]) {
				rank[i]++;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		cout << rank[i] << " ";
	}
	cout << endl;
}
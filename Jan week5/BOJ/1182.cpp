#include <iostream>
using namespace std;

int N, S, cnt;
int arr[20];

void f(int i, int sum) {
	if (i == N) {
		if (sum == S) {
			cnt++;
		}
		return;
	}
	f(i + 1, sum); // 다음 숫자를 더하지 않는 경우
	f(i + 1, sum + arr[i]); //다음 숫자를 더하는 경우
}

int main() {
	cin >> N >> S;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	f(0, 0);
	if (S == 0) { //원하는 합이 0일때, 아무것도 더하지 않아서 0이 되는 경우 제외
		cnt--;
	}
	cout << cnt << endl;
}
#include <iostream>
using namespace std;

bool push[10]; //누를 수 있는 버튼

int possible(int n) {
	if (n == 0) { //0번일때
		if (push[0]) {
			return 0; //고장난 버튼일 때 true
		}
		else {
			return 1;
		}
	}

	int len = 0;
	while (n > 0) {
		if (push[n % 10]) { //1-9까지 한 번호씩 알아보기 위함
			return 0;
		}
		len++;
		n /= 10;
	}
	return len;
}

int main() {
	int N; //이동하려는 채널
	int M; //고장난 버튼 개수
	cin >> N;
	cin >> M;

	for (int i = 0; i < M; i++) {
		int B;
		cin >> B;
		push[B] = true; //고장난 버튼 -> true
	}

	//+,-만 사용해서 이동하는 경우
	int move = N - 100;
	if (move < 0) {
		move = -move; //절댓값 취하기와 동일
	}

	//채널 이동과 +,- 사용해서 이동하는 경우
	for (int i = 0; i <= 1000000; i++) {
		int c = i; //이동하려는 채널
		int len = possible(c);

		if (len > 0) { //len이 0이면 고장난 버튼이 포함되어 있음 
			int press = c - N; //c로 채널 이동 후, +,-를 하는 값 만들기

			if (press < 0) {
				press = -press;
			}
			if (move > len + press) {
				move = len + press;
			}
		}
	}
	cout << move << endl;
}
#include <iostream>
using namespace std;

int main() {
	int K; //처음 폭탄을 들고 있는 사람 번호
	int N; //질문의 개수
	int T; //대답하기까지 걸린 시간
	char Z; // 플레이어의 대답 상태

	cin >> K;
	cin >> N;

	int bomb = 210; //3분 30초
	int time = 0; //대답하기까지 걸린 시간 합계

	for (int i = 0; i < N; i++) {
		cin >> T >> Z;

		time += T;

		if (time >= bomb) { //210초가 지나면 break
			cout << K << endl;
			break;
		}
		if (Z == 'T') { //정답인 경우에만 왼쪽 사람에게 토스
			K++;
			if (K == 9) {
				K = 1;
			}
		}
	}
}
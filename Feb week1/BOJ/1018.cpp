#include <iostream>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;

	int _min = 64; //가장 많이 색칠해야하는 칸의 개수(8x8)
	int color = 0;

	char WB[8][8] = {
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W'
	};

	char BW[8][8] = {
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B'
	};

	char arr[51][51];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> arr[i][j];
		}
	}

	//8x8로 자르는걸 어디서 시작할지 정하는 for문
	for (int i = 0; i <= N - 8; i++) {
		for (int j = 0; j <= M - 8; j++) {
			int bw = 0;
			int wb = 0;

			//잘라낸 8x8에서 색이 기준과 같은지 다른지 비교
			for (int k = 0; k < 8; k++) {
				for (int l = 0; l < 8; l++) {
					if (arr[i + k][j + l] != WB[k][l]) {
						wb++; //다시 색칠해야하는 개수++
					}
					if (arr[i + k][j + l] != BW[k][l]) {
						bw++; //다시 색칠해야하는 개수++
					}
				}
			}
			color = min(wb, bw);
			if (color <= _min) {
				_min = color;
			}
		}
	}
	cout << _min << endl;
}
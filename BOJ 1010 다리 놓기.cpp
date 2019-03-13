#include <iostream>

using namespace std;

int main() {
	int T, N, M;
	cin >> T;

	int R[30][30];
	for (int i = 0; i < 30; i++) {
		for (int j = 0; j < 30; j++)
			R[i][j] = 0;
	}
	for (int i = 0; i < 30; i++) {
		R[0][i] = i + 1;
		R[i][i] = 1;
	}
	for (int i = 1; i < 30; i++) {
		for (int j = 1 + 1; j < 30; j++) {
			R[i][j] = R[i - 1][j - 1] + R[i][j - 1];
		}
	}

	for (; T; T--) {
		cin >> N >> M;
		cout << R[N-1][M-1] << "\n";
	}
}
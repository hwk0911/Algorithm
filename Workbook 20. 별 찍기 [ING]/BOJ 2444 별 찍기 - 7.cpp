#include <iostream>

using namespace std;

void pickstar(int left, int height, int right);

char star[100][200];
int N;
int i = 0;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> N;
	for (int i = 0; i < 100; i++)
		for (int j = 0; j < 200; j++)
			star[i][j] = NULL;

	pickstar(N - 1, 0, N - 1);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N * 2; j++) {
			if (star[i][j - 1] == '*' && star[i][j] == NULL && j - 1 != 0)
				break;
			if (star[i][j] == '*')
				cout << star[i][j];
			else if (star[i][j] == NULL)
				cout << ' ';
		}
		cout << "\n";
	}

	for (int i = N - 2; i > -1; i--) {
		for (int j = 0; j < N * 2; j++) {
			if (star[i][j - 1] == '*' && star[i][j] == NULL && j - 1 != 0)
				break;
			if (star[i][j] == '*')
				cout << star[i][j];
			else if (star[i][j] == NULL)
				cout << ' ';
		}
		if (i != 0) {
			cout << "\n";
		}
	}
}

void pickstar(int left, int height, int right) {
	if (left == right)
		star[height][left] = '*';
	else {
		for (int i = left; i < right + 1; i++) {
			star[height][i] = '*';
		}
	}
	if (height != N - 1) {
		pickstar(left - 1, height + 1, right + 1);
	}
}
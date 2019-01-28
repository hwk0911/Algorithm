#include <iostream>

using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int T, k, n;
	int arr[15][15];
	for (int i = 0; i < 15; i++) {
		arr[i][0] = 1;
		arr[0][i] = i + 1;
	}
	for (int i = 1; i < 15; i++) {
		for (int j = 1; j < 15; j++) {
			arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
		}
	}
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> k >> n;
		cout << arr[k][n - 1];
		if (i != T - 1)
			cout << "\n";
	}
}

/*
Input 1:
2
1
3
2
3

Output 1:
6
10
*/
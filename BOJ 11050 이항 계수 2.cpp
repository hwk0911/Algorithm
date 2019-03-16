#include <iostream>

using namespace std;
int arr[1001][1001];
int main() {
	
	int N, K;
	cin >> N >> K;

	for (int i = 0; i < 1001; i++) {
		arr[0][i] = 1;
		arr[i][i] = 1;
	}
	for (int i = 1; i < 1001; i++) {
		for (int j = i + 1; j < 1001; j++) {
			arr[i][j] = (arr[i - 1][j - 1] + arr[i][j - 1]) % 10007;
		}
	}

	cout << arr[K][N];
}
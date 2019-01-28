#include <iostream>
using namespace std;
int main() {
	int H, W, N, T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> H >> W >> N;
		printf("%d%02d", (N - 1) % H + 1, (N - 1) / H + 1);
		if (i + 1 != T)
			cout << "\n";
	}
}

/*
Input 1:
2
6 12 10
30 50 72

Output 1:
402
1203
*/
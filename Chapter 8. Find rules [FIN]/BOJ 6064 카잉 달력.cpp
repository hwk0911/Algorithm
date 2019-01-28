#include <iostream>

using namespace std;

int main() {
	int T, M, N, x, y;
	int a, b;
	bool flag = true;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> M >> N >> x >> y;
		a = x;
		b = x;
		for (int j = x; j < M*N + 1; j += M) {
			if (b%N == y % N) {
				cout << j;
				flag = false;
				break;
			}
			b += M;
		}
		if (flag)
			cout << -1;
		flag = true;
		if (i + 1 != T)
			cout << "\n";
	}
}

/*
Input 1:
3
10 12 3 9
10 12 7 2
13 11 5 6

Output 1:
33
-1
83
*/
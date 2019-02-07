#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;
	for (int i = 0; i < 9; i++) {
		cout << N << " " << '*' << " " << i + 1 << " " << '=' << " " << N * (i + 1) << "\n";
	}
}

/*
Input 1:
2

Output 1:
2 * 1 = 2
2 * 2 = 4
2 * 3 = 6
2 * 4 = 8
2 * 5 = 10
2 * 6 = 12
2 * 7 = 14
2 * 8 = 16
2 * 9 = 18
*/
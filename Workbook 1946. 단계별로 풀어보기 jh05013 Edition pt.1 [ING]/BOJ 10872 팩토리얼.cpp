#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;

	for (int i = N-1; i > 1; i--) {
		N *= i;
	}
	if (N == 0)
		N = 1;

	cout << N;

}

/*
Input 1:
10

Output 1:
3628800
*/
#include <iostream>
using namespace std;

int main() {
	int E, S, M;
	int A = 1, B = 1, C = 1;
	int count = 1;
	cin >> E >> S >> M;
	while (1) {
		if (A == E && B == S && C == M) {
			cout << count;
			break;
		}
		A++, B++, C++;
		if (A == 16)
			A = 1;
		if (B == 29)
			B = 1;
		if (C == 20)
			C = 1;
		count++;
	}
}

/*
Input 1:
1 16 16

Output 1:
16

*/
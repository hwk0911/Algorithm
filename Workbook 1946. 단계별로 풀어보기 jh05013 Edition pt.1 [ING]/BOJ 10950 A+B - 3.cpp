#include <iostream>
using namespace std;

int main() {
	int T, A, B;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> A >> B;
		cout << A + B << "\n";
	}
}

/*
Input 1:
5
1 1
2 3
3 4
9 8
5 2

Output 1:
2
5
7
17
7

*/
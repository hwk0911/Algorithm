#include <iostream>
using namespace std;

int main() {
	int A, B;
	while (1) {
		cin >> A >> B;
		if (A | B) {
			cout << A + B << "\n";
		}
		else
			break;
	}
}

/*
Input 1:
1 1
2 3
3 4
9 8
5 2
0 0

Output 1:
2
5
7
17
7

*/
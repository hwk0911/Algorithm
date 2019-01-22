#include <iostream>

using namespace std;

int main() {
	int A, B, C;
	cin >> A >> B >> C;
	if (C != 0) {
		cout << (A + B) % C << endl;
		cout << (A%C + B % C) % C << endl;
		cout << (A*B) % C << endl;
		cout << (A%C * B%C) % C;
	}
}

/*
Input 1:
5 8 4

Output 1:
1
1
0
0
*/
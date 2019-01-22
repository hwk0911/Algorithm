#include <iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b;
	if (b != 0) {
		cout << endl << a / b << endl;
		cout << a % b;
	}
}

/*
Input 1:
7 3

Output 1:
10
4
21
2
1
*/
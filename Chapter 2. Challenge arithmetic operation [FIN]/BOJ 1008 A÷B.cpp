#include <iostream>

using namespace std;

int main() {
	long double a, b;
	cin >> a >> b;
	cout.precision(15);
	cout << a / b;
}

/*
Input 1:
1 3

Output 1:
0.33333333333333333333333333333333

Input 2:
4 5

Output 2:
0.8
*/
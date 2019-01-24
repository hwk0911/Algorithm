#include <iostream>

using namespace std;
int sort(int a, int b, int c);

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int a, b, c;

	cin >> a >> b >> c;
	cout << sort(a, b, c);


}

int sort(int a, int b, int c) {
	int temp;

	if (a >= b) {
		temp = a;
		a = b;
		b = temp;
	}
	if (b >= c) {
		temp = b;
		b = c;
		c = temp;
	}
	if (a >= b) {
		temp = a;
		a = b;
		b = temp;
	}

	return b;
}

/*
Input 1:
20 30 10

Output 1:
20

Input 2:
30 30 10

Output 2:
30

Input 3:
40 40 40

Output 3:
40

Input 4:
20 10 10

Output 4:
10
*/
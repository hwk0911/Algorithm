#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	a = a * b*c;
	int result[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int i = 0;
	for (i = 10; i <= a; i *= 10) {
	}
	i /= 10;
	for (; i != 1; i /= 10) {
		result[a / i]++;
		a = a - ((a / i)*i);
	}
	result[a / i]++;
	for (int j = 0; j < 10; j++)
		cout << result[j] << "\n";
}


/*
Input 1:
150
266
427

Output 1:
3
1
0
2
0
0
0
2
0
0
*/
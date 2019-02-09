#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int a = 1, b = 1;
	int th;
	int flag = 1;

	cin >> th;
	for (int i = 1; i < th; i++) {
		if (i == 1)
			b++;
		else {
			if (a == 1 && flag == 0) {
				b++;
				flag = 1;
			}
			else if (b == 1 && flag == 1) {
				a++;
				flag = 0;
			}
			else if (flag == 1) {
				a++;
				b--;
			}
			else if (flag == 0) {
				a--;
				b++;
			}
		}
	}
	cout << a << '/' << b << endl;
}

/*
Input 1:
14

Output 1:
2/4
*/
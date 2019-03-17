#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	char ans[9] = {0,};
	cin >> s;

	for (int i = s.length() - 1, k = 0; i >= 0; i--, k++) {
		if (s.at(i) == ',') {
			k = -1;
		}
		else {
			ans[k] += (int)(s.at(i) - 48);
		}
	}
	for (int i = 0; i < 8; i++) {
		ans[i + 1] += ans[i] / 10;
		ans[i] %= 10;
	}
	for (int i = 8; i; i--) {
		if (ans[i] != 0) {
			for (; i >= 0; i--)
				cout << (int)ans[i];
			break;
		}
	}
}
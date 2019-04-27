#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	cin >> str;

	for (int i = 0, j = str.length() - 1; i < str.length(); i++, j--) {
		if (str.at(i) != str.at(j)) {
			cout << 0;
			return 0;
		}
	}
	cout << 1;
}
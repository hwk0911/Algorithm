#include <iostream>
#include <string>

using namespace std;

int main() {
	string VPS;
	int T, count = 0;

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> VPS;
		for (int j = 0; j < VPS.size(); j++) {
			if (VPS.at(j) == '(')
				count++;
			else
				count--;

			if (count < 0) {
				break;
			}
		}
		if (count == 0)
			cout << "YES\n";
		else
			cout << "NO\n";

		count = 0;
	}
}

/*
Input 1:
6
(())())
(((()())()
(()())((()))
((()()(()))(((())))()
()()()()(()()())()
(()((())()(

Output 1:
NO
NO
YES
NO
YES
NO
*/

/*
Input 1:
6
(())())
(((()())()
(()())((()))
((()()(()))(((())))()
()()()()(()()())()
(()((())()(

Output 1:
NO
NO
YES
NO
YES
NO
*/
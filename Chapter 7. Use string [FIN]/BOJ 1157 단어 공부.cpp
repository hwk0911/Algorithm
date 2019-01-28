#include <iostream>
#include <string>

using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string str;
	int a[(int)('z' - 'a' + 1)];
	int max = 0;
	for (int i = 0; i < 'z' - 'a' + 1; i++)
		a[i] = 0;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		if (str.at(i) >= 'a' && str.at(i) <= 'z')
			a[str.at(i) - 'a']++;
		else
			a[str.at(i) - 'A']++;
	}
	for (int i = 0; i < 'z' - 'a' + 1; i++)
		if (a[i] > a[max])
			max = i;
	for (int i = 0; i < 'z' - 'a' + 1; i++)
		if (a[max] == a[i] && max != i) {
			cout << '?';
			return 0;
		}
	cout << (char)('A' + max);
}

/*
Input 1:
Mississipi

Output 1:
?

Input 2:
zZa

Output 2:
Z

Input 3:
z

Output 3:
Z

Input 4:
baaa

Output 4:
A
*/
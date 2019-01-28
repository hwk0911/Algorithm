#include <iostream>
#include <string>
using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int al[26];
	string a;
	cin >> a;
	for (int i = 0; i < 26; i++)
		al[i] = -1;
	for (int i = 0; i < a.length(); i++)
		if (al[a.at(i) - 97] == -1)
			al[a.at(i) - 97] = i;
	for (int i = 0; i < 26; i++)
		cout << al[i] << " ";
}

/*
Input 1:
baekjoon

Output 1:
1 0 -1 -1 2 -1 -1 -1 -1 4 3 -1 -1 7 5 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
*/
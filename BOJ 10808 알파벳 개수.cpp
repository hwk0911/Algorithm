#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	int alpha[26] = { 0, };
	cin >> str;
	
	for (int i = 0; i < str.length(); i++) {
		alpha[(int)(str.at(i) - 'a')]++;
	}

	for (int i = 0; i < 26; i++)
		cout << alpha[i] << " ";
}
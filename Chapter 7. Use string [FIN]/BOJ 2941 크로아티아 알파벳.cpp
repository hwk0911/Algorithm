#include <iostream>
#include <string>

using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string word;
	int index;
	string croatia[8] = { "dz=","c=","c-","d-","lj","nj","s=","z=" };

	cin >> word;

	for (int i = 0; i < 8; i++) {
		if (word.find(croatia[i]) != string::npos) {
			while (word.find(croatia[i]) != string::npos) {
				int index = word.find(croatia[i]);
				word[index] = '1';
				word[index + 1] = '0';
				if (i == 0) {
					word[index + 2] = '0';
				}
			}
		}
	}
	index = 0;
	for (int i = 0; i < word.length(); i++)
		if (word.at(i) >= 'a' && word.at(i) <= 'z')
			index++;
		else if (word.at(i) == '1')
			index++;

	cout << index;
}

/*
Input 1:
ljes=njak

Output 1:
6

Input 2:
ddz=z=

Output 2:
3

Input 3:
nljj

Output 3:
3

Input 4:
c=c=

Output 4:
2
*/
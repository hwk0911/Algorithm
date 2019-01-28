#include <iostream>
#include <string>

using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string word = "";
	int a[27] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
	int time = 0;
	cin >> word;


	for (int i = 0; i < word.length(); i++) {
		time += a[word.at(i) - 65];
	}

	cout << time;
}

/*
Input 1:
UNUCIC

Output 1:
36
*/
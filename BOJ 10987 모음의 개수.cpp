#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	int answer = 0;
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		switch (str.at(i))
		{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			answer++;
		}
	}

	cout << answer;
}
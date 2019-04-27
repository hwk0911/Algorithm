#include <iostream>
#include <string>

using namespace std;

int main() {
	string data;
	string answer = "";
	cin >> data;

	for (int i = 0; i < data.length(); i++) {
		switch (data.at(i)) {
		case 'C':
		case 'A':
		case 'M':
		case 'B':
		case 'R':
		case 'I':
		case 'D':
		case 'G':
		case 'E':
			break;
		default:
			answer += data.at(i);
		}
	}
	cout << answer;
}
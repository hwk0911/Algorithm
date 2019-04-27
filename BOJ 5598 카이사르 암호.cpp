#include <iostream>
#include <string>

using namespace std;

int main() {
	string data;
	cin >> data;

	for (int i = 0; i < data.length(); i++) {
		if (data.at(i) - 3 < 'A')
			cout << (char)(data.at(i) +23);
		else
			cout << (char)(data.at(i) - 3);
	}
}
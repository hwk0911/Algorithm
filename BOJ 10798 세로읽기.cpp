#include <iostream>
#include <string>

using namespace std;

int main() {
	string arr[5];
	cin >> arr[0];
	cin >> arr[1];
	cin >> arr[2];
	cin >> arr[3];
	cin >> arr[4];

	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 5; j++) {
			if (arr[j].length() > i)
				cout << arr[j].at(i);
		}
	}
}
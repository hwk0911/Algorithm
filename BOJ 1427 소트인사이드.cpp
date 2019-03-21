#include <iostream>
#include <string>

using namespace std;

int main() {
	string N;
	cin >> N;

	char *arr = new char[N.length()];
	int index;

	for (int i = 0; i < N.length(); i++) {
		arr[i] = N.at(i);
	}

	for (int i = 0; i < N.length(); i++) {
		for (int j = 0; j < N.length() - i - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				index = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = index;
			}
		}
	}
	for (int i = 0; i < N.length(); i++) {
		cout << arr[i];
	}
}
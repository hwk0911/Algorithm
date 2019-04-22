#include <iostream>

using namespace std;

int main() {
	char data[30] = { 0, };
	int index;

	for (int i = 0; i < 28; i++) {
		cin >> index;
		data[index - 1] = 1;
	}

	for (int i = 0; i < 30; i++) {
		if (data[i] == 0)
			cout << i + 1 << "\n";
	}
}
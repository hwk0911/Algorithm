#include <iostream>

using namespace std;

int main() {
	int N;
	int num;
	int i = 0;

	cin >> N;

	for (int k = 1; N; N--, k++) {
		cin >> num;
		if (num != k)
			i++;
	}
	cout << i;
}
#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 1; ; i++) {
		if ((i + (i*i) + 1) == N) {
			cout << i;
			break;
		}
	}
}
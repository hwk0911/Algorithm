#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int N;
	int *code;
	char *decode;
	char buf[1];


	cin >> N;

	code = new int[N];
	decode = new char[N+1];

	for (int i = 0; i < N; i++) {
		cin >> code[i];
	}

	cin.getline(buf, 1);
	cin.getline(decode, N+1);

	sort(code, code + N);
	sort(decode, decode + N + 1);

	for (int i = 0; i < N; i++) {
		if (decode[i+1] >= 'A' && decode[i+1] <= 'Z') {
			if (decode[i+1] - 'A' + 1 != code[i]) {
				cout << "n";
				return 0;
			}
		}
		else if (decode[i+1] == ' ') {
			if (decode[i+1] - ' ' != code[i]) {
				cout << "n";
				return 0;
			}
		}
		else {
			if (decode[i+1] - 'a' + 27 != code[i]) {
				cout << "n";
				return 0;
			}
		}
	}
	cout << "y";
}
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void answer(string A, string B, char *C, int dMax);

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string A, B;
	char *C;

	cin >> A >> B;
	C = new char[max(A.length(), B.length()) + 1];
	for (int i = 0; i < max(A.length(), B.length()) + 1; i++)
		C[i] = 0;
	answer(A, B, C, max(A.length(), B.length()) + 1);
}

void answer(string A, string B, char *C, int dMax) {
	for (int i = A.length() - 1, j = 0; i >= 0; i--, j++) {
		C[j] += A.at(i) - 48;
	}
	for (int i = B.length() - 1, j = 0; i >= 0; i--, j++) {
		C[j] += B.at(i) - 48;
	}
	for (int i = 0; i < dMax - 1; i++) {
		C[i + 1] += C[i] / 10;
		C[i] %= 10;
	}
	for (int i = dMax - 1; i >= 0; i--) {
		if (C[i] != 0) {
			for (int j = i; j >= 0; j--) {
				cout << (int)C[j];
			}
			break;
		}
	}
}
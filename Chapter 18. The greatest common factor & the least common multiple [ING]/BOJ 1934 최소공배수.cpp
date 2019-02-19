#include <iostream>

using namespace std;

int main() {
	int T, A, B;

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> A >> B;
		if (B % A == 0)
			cout << B << "\n";
		else if (A % B == 0) {
			cout << A << "\n";
		}
		else {
			int A2 = A;
			int B2 = B;
			while (1) {
				if (A2 == B2) {
					cout << B2 << "\n";
					break;
				}
				else if (A2 > B2) {
					B2 += B;
				}
				else if (A2 < B2) {
					A2 += A;
				}
			}
		}
	}
}
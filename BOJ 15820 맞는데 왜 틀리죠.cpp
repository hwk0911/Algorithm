#include <iostream>

#define A "Accepted"
#define W "Wrong Answer"
#define WR "Why Wrong!!!"

using namespace std;

int main() {
	int S1, S2;
	int ta, ma;

	cin >> S1 >> S2;
	for (int i = S1; i; i--) {
		cin >> ta >> ma;
		if (ta != ma) {
			cout << W;
			return 0;
		}
	}
	for (int i = S2; i; i--) {
		cin >> ta >> ma;
		if (ta != ma) {
			cout << WR;
			return 0;
		}
	}
	cout << A;
}
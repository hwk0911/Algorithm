#include <iostream>

using namespace std;

struct status {
	short stat[4];
};

int main() {
	status *s;

	int T;
	short var;
	cin >> T;
	s = new status[T];

	for (; T; T--) {
		cin >> s[T - 1].stat[0] >> s[T - 1].stat[1] >> s[T - 1].stat[2] >> s[T - 1].stat[3];
		for (int i = 0; i < 4; i++) {
			cin >> var;
			s[T - 1].stat[i] += var;
			if (i == 0 || i == 1) {
				if (s[T - 1].stat[i] < 1)
					s[T - 1].stat[i] = 1;
			}
			else if (i == 2)
				if (s[T - 1].stat[i] < 0)
					s[T - 1].stat[i] = 0;
		}
		cout << s[T - 1].stat[0] + (s[T - 1].stat[1] * 5) + (s[T - 1].stat[2] * 2) + (s[T - 1].stat[3]*2) << "\n";
	}
}
#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int T, a, b;
	int answer;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> a >> b;
		answer = a;
		for (int j = 0; j < b-1; j++) {
			answer = (answer * a) % 10;
		}
		if (answer == 0)
			cout << 10 << "\n";
		else
			cout << answer << "\n";
	}
}
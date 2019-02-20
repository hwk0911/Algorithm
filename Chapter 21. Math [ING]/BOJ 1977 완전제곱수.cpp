#include <iostream>

using namespace std;

int main() {
	int pow[101];
	int M, N;
	int answer = 0;
	int min = 10000;

	for (int i = 0; i < 101; i++) {
		pow[i] = i * i;
	}

	cin >> M >> N;
	for (int i = 0; i < 101; i++) {
		if (pow[i] >= M && pow[i] <= N) {
			answer += pow[i];
			if (min > pow[i])
				min = pow[i];
		}
	}
	if (answer == 0)
		cout << -1;
	else {
		cout << answer << "\n" << min;
	}
}
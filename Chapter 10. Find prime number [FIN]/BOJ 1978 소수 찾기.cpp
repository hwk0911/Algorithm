#include <iostream>
#include <math.h>

using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int T, num, count = 0;
	bool prime[1001];
	prime[0] = false;
	prime[1] = false;

	for (int i = 2; i < 1001; i++) {
		prime[i] = true;
	}

	for (int i = 2; i < sqrt(1001) + 1; i++) {
		if (prime[i] == true) {
			for (int j = 2; i*j < 1001; j++) {
				prime[i*j] = false;
			}
		}
	}
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> num;
		if (prime[num] == true)
			count++;
	}
	cout << count;
}

/*
Input 1:
4
1 3 5 7

Output 1:
3
*/
#include <iostream>
#include <bitset>

using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int T, n, answer;
	unsigned char *pPrime;

	cin >> T;

	for (int t = 0; t < T; t++) {
		cin >> n;
		pPrime = new unsigned char[(n >> 3) + 1];

		pPrime[0] = 252;

		for (int i = 1; i < (n >> 3) + 1; i++) {
			pPrime[i] = 255;
		}

		for (int i = 2; i < n + 1; i++) {
			if (pPrime[i >> 3] & (1 << (i & 7))) {
				for (int j = i + i; j < n + 1; j += i) {
					pPrime[j >> 3] = (pPrime[j >> 3] | 1 << (j & 7)) & ~(1 << (j & 7));
				}
			}
		}


		for (int i = 2; i <= n >> 1; i++) {
			if (pPrime[i >> 3] & (1 << (i & 7))) {
				if (pPrime[(n - i) >> 3] & (1 << ((n - i) & 7)))
					answer = i;
			}
		}

		cout << answer << " " << n - answer << "\n";
		delete pPrime;
		answer = 0;
	}
}

/*
Input 1:
3
8
10
16

Output 1:
3 5
5 5
5 11
*/
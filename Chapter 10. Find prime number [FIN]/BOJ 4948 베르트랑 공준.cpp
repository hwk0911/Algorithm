#include <iostream>
#include <bitset>

using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n, MAX, count = 0;
	unsigned char *prime;

	cin >> n;
	while (n != 0) {
		MAX = n * 2 + 1;
		prime = new unsigned char[(MAX >> 3) + 1];
		prime[0] = 252;
		for (int i = 1; i < (MAX >> 3) + 1; i++) {
			prime[i] = 255;
		}
		for (int i = 2; i < MAX; i++) {
			if (prime[i >> 3] & (1 << (i & 7))) {
				for (int j = i + i; j < MAX; j += i) {
					prime[j >> 3] = (prime[j >> 3] | 1 << (j & 7)) & ~(1 << (j & 7));
				}
			}
		}
		for (int i = n + 1; i < MAX; i++) {
			if (prime[i >> 3] & (1 << (i & 7)))
				count++;
		}
		cout << count << "\n";
		count = 0;
		delete(prime);
		cin >> n;
	}
}
/*
Input 1:
1
10
13
100
1000
10000
100000
0

Output 1:
1
4
3
21
135
1033
8392
*/
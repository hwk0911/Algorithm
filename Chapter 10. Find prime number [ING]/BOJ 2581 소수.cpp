#include <iostream>
#include <math.h>
#include <vector>

#define MAX 10001

using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int M, N, add = 0;
	bool prime[MAX];
	vector <int> primeArr;
	prime[0] = false;
	prime[1] = false;

	for (int i = 2; i < MAX; i++) {
		prime[i] = true;
	}
	cin >> M >> N;

	for (int i = 2; i < sqrt(N) + 1; i++) {
		if (prime[i] == true) {
			for (int j = 2; i*j < N + 1; j++) {
				prime[i*j] = false;
			}
		}
	}

	for (int i = M; i < N + 1; i++) {
		if (prime[i] == true)
			primeArr.push_back(i);
	}

	if (primeArr.size() == 0)
		cout << -1;
	else {
		for (int i = 0; i < primeArr.size(); i++) {
			add += primeArr[i];
		}
		cout << add << "\n" << primeArr[0];
	}
}

/*
Input 1:
60
100

Output 1:
620
61

Input 1:
64
65

Output 1:
-1
*/
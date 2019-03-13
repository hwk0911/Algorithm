#include <iostream>

using namespace std;

int main() {
	int N, L, sum = 0;
	cin >> N >> L;
	int arr[101];
	arr[0] = 0;
	arr[1] = 0;
	arr[2] = 1;
	for (int i = 3; i < 101; i++) {
		arr[i] = arr[i - 1] + (i - 1);
	}
	for (int i = L; i < 101; i++) {
		if ((N - arr[i]) % i == 0 && N >= arr[i]) {
			sum = (N - arr[i]) / i;
			for (; i; i--) {
				cout << sum;
				sum++;
				if (i - 1 != 0)
					cout << " ";
			}
			return 0;
		}
	}
	cout << -1;
}
#include <iostream>
#include <algorithm>
#include <cmath>

#define MAX2(a,b) (a) > (b) ? (a) : (b)
#define MIN2(a,b) (a) < (b) ? (a) : (b)

using namespace std;

int main() {
	int N;
	double sum = 0;
	int max = 0, min = 0;
	int dBindo = 0;
	int* arr;
	int bindo[8001] = { 0, };

	cin >> N;
	arr = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		sum += arr[i];
		bindo[arr[i] + 4000]++;
	}
	sort(arr, arr + N);

	sum = floor((sum / N) + 0.5);

	cout << sum << "\n";
	cout << arr[(N - 1) / 2] << "\n";

	for (int i = 0; i < 8001; i++) {
		if (bindo[dBindo] < bindo[i])
			dBindo = i;
	}

	for (int i = 0, k = 0; i < 8001 && k != 2; i++) {
		if (bindo[dBindo] == bindo[i]) {
			dBindo = i;
			k++;
		}
	}

	cout << dBindo - 4000 << "\n";
	cout << arr[N - 1] - arr[0];
}
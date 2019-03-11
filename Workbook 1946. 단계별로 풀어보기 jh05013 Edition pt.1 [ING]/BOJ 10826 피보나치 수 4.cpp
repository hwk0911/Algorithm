#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	char arr_a[2500];
	char arr_b[2500];
	char arr_c[2500];

	int n;

	for (int i = 0; i < 2500; i++) {
		arr_a[i] = 0;
		arr_b[i] = 0;
		arr_c[i] = 0;
	}

	arr_a[0] = 0;
	arr_b[0] = 1;

	cin >> n;

	if (n == 0)
		cout << 0;
	else if (n == 1)
		cout << 1;
	else {
		for (int i = 0; i < n - 1; i++) {
			for (int j = 0; j < 2500; j++) {
				arr_c[j] = arr_b[j];
			}
			for (int j = 0; j < 2500; j++) {
				arr_b[j] += arr_a[j];
			}
			for (int j = 0; j < 2499; j++) {
				arr_b[j + 1] += arr_b[j] / 10;
				arr_b[j] %= 10;

				arr_a[j] = arr_c[j];
			}

		}
		for (int i = 2499; i >= 0; i--) {
			if (arr_b[i] != 0) {
				for (int j = i; j >= 0; j--) {
					cout << (int)arr_b[j];
				}
				break;
			}
		}
	}
}
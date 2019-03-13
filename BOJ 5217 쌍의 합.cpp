#include <iostream>

#define P "Pairs for "

using namespace std;

int main() {
	int T;
	int n;
	int k = 0;
	char arr[18];
	for (int i = 0; i < 18; i++)
		arr[i] = 'X';

	cin >> T;

	for (; T > 0; T--) {
		cin >> n;
		for (int i = 1; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				if (i + j == n) {
					arr[k] = i;
					arr[k + 1] = ' ';
					arr[k + 2] = j;
					k += 3;
				}
			}
		}
		cout << P << n << ":" << " ";
		for (int i = 0; i < 15; i += 3) {
			if (arr[i] != 'X') {
				cout << (int)arr[i] << arr[i + 1] << (int)arr[i + 2];
			}
			if (arr[i+3] == 'X') {				
				break;
			}
			else {
				cout << ", ";
			}
		}


		cout << "\n";
		k = 0;
		for (int i = 0; i < 18; i++)
			arr[i] = 'X';
	}
}
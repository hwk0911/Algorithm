#include <iostream>
using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int T, N;
	int arr_0[41];
	int arr_1[41];

	arr_0[0] = 1;
	arr_1[0] = 0;
	arr_0[1] = 0;
	arr_1[1] = 1;

	for (int i = 2; i < 41; i++) {
		arr_0[i] = arr_0[i - 2] + arr_0[i - 1];
		arr_1[i] = arr_1[i - 2] + arr_1[i - 1];
	}

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N;
		cout << arr_0[N] << " " << arr_1[N] << "\n";
	}
}


/*
Input 1:
3
0
1
3

Output 1:
1 0
0 1
1 2
*/
#include <iostream>
using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int arr[5];
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		if (arr[i] < 40)
			arr[i] = 40;
	}
	cout << (arr[0] + arr[1] + arr[2] + arr[3] + arr[4]) / 5;
}

/*
Input 1:
10
65
100
30
95
.
Output 1:
68
*/
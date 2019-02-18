#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int arr[9];
	int sum = 0;
	
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	for (int i = 0; i < 8; i++) {
		for (int j = i+1; j < 9; j++) {
			if (sum - (arr[i] + arr[j]) == 100) {
				arr[i] = 0;
				arr[j] = 0;
				sum = 100;
			}
		}
		if (sum == 100)
			break;
	}
	sort(arr,arr+9);

	for (int i = 0; i < 9; i++) {
		if (arr[i] != 0)
			cout << arr[i] << "\n";
	}
}

/*
Input 1:
20
7
23
19
10
15
25
8
13

Output 1:
7
8
10
13
19
20
23
*/
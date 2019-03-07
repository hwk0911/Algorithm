#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int arr[10001];
	int N, num;

	for (int i = 0; i < 10001; i++)
		arr[i] = 0;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		arr[num]++;
	}

	for (int i = 0; i < 10001; i++) {
		for (int j = 0; j < arr[i]; j++) {
			cout << i << "\n";
		}
	}
}

/*
Input 1:
10
5
2
3
1
4
2
3
5
1
7

Output 1:
1
1
2
2
3
3
4
5
5
7
*/
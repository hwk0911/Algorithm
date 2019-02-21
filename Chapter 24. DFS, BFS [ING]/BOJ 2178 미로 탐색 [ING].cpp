#include <iostream>

using namespace std;
int sol(char **arr, int a, int b, int c, int n, int m);

int main() {
	int N, M;
	char **arr;
	cin >> N >> M;

	arr = new char*[N];
	for (int i = 0; i < N; i++) {
		arr[i] = new char[M];
	}

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}


	sol(arr, 1, 1, 1, N, M);
}

int sol(char **arr, int a, int b, int c, int n, int m) {
	if (n == a && m == b) {
		cout << c;
	}
	else {
		cout << c;
		if (arr[a - 1][b] == 1)
			sol(arr, a++, b, c++, n, m);
		if (arr[a][b + 1] == 1)
			sol(arr, a, b++, c++, n, m);

	}
	return 0;
}
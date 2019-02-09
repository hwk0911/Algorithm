#include <iostream>

using namespace std;

void bubble(int *a, int T);
void insert(int *a, int T);

int main() {
	int T;
	int N;
	int *arr;
	cin >> T;
	arr = new int[T];
	for (int i = 0; i < T; i++) {
		cin >> arr[i];
	}
	insert(&arr[0], T);

	for (int i = 0; i < T; i++) {
		cout << arr[i] << "\n";
	}
}
/*
void bubble(int *a, int T) {
	int temp;
	for (int i = 0; i < T; i++) {
		for (int j = 0; j < T-1; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}
*/
void insert(int *a, int T) {
	int temp;
	for (int i = 0; i < T - 1; i++) {
		if (a[i] > a[i + 1]) {
			temp = a[i];
			a[i] = a[i + 1];
			a[i + 1] = temp;
		}
		for (int j = i; j > 0; j--) {
			if (a[j] < a[j - 1]) {
				temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}

	}
}

/*
Input 1:
5
5
2
3
4
1

Output 1:
1
2
3
4
5
*/
#include <iostream>

using namespace std;

struct arr {
	int x;
	int y;
};

int main() {
	cin.tie(NULL);
	std::ios::sync_with_stdio(false);
	arr *a;
	arr temp;
	int N;
	int index;
	cin >> N;

	a = new arr[N];
	for (int i = 0; i < N; i++) {
		cin >> a[i].x;
		cin >> a[i].y;
	}
	for (int i = 0; i < N - 1; i++) {
		index = i;
		for (int j = i + 1; j < N; j++) {
			if (a[j].x < a[index].x) {
				index = j;
			}
			else if (a[j].x == a[index].x) {
				if (a[j].y < a[index].y)
					index = j;
			}
		}
		temp = a[i];
		a[i] = a[index];
		a[index] = temp;
	}

	for (int i = 0; i < N; i++) {
		cout << a[i].x << " " << a[i].y << "\n";
	}
}
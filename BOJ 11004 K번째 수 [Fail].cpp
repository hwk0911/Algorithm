#include <iostream>

using namespace std;

void quick(int *data, int start, int end, int k);

int main() {
	int N;
	cin >> N;
	int K;
	cin >> K;
	int *data = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> data[i];
	}
	quick(data, 0, N - 1, K - 1);

	cout << data[K - 1];
}

void quick(int *data, int start, int end, int k) {
	if (start >= end)
		return;

	int pivot = start;
	int left = start + 1;
	int right = end;
	int temp;

	while (left <= right) {
		while (left < end && data[left] < data[pivot]) {
			left++;
		}
		while (right > start && data[right] >= data[pivot]) {
			right--;
		}
		if (left >= right) {
			temp = data[pivot];
			data[pivot] = data[right];
			data[right] = temp;
		}
		else {
			temp = data[left];
			data[left] = data[right];
			data[right] = temp;
		}
	}
		quick(data, start, right - 1, k);
		quick(data, right + 1, end, k);
}
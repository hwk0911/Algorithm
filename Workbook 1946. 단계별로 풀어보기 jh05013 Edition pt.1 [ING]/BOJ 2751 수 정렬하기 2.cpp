#include <iostream>

using namespace std;

void Divide(int *arr, int start, int end);
void Combine(int *arr, int start, int mid, int end);

int *sort_arr;

int main() {
	int *arr;
	int N;
	cin >> N;

	arr = new int[N];
	sort_arr = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	Divide(arr, 0, N - 1);

	for (int i = 0; i < N; i++) {
		cout << arr[i] << "\n";
	}
}

void Divide(int *arr, int start, int end) {
	int mid = (end + start) / 2;

	if (start < end) {
		Divide(arr, start, mid);
		Divide(arr, mid + 1, end);
		Combine(arr, start, mid, end);
	}
}

void Combine(int *arr, int start, int mid, int end) {
	int i = start;
	int j = mid + 1;
	int k = start;

	while (i <= mid && j <= end) {
		if (arr[i] <= arr[j])
			sort_arr[k++] = arr[i++];
		else
			sort_arr[k++] = arr[j++];
	}

	int tmp = i > mid ? j : i;

	while (k <= end)
		sort_arr[k++] = arr[tmp++];

	for (int i = start; i <= end; i++)
		arr[i] = sort_arr[i];
}
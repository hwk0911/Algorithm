#include <iostream>

using namespace std;

void quick(int *data, int start, int end);

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	int K;
	cin >> K;
	int *data = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> data[i];
	}
	quick(data, 0, N - 1);

	cout << data[K - 1];
}

void quick(int *data, int start, int end) {
	int i = start, j = end;
	int pivot = data[(start + end) / 2];
	int temp;
	do
	{
		while (data[i] < pivot)
			i++;
		while (data[j] > pivot)
			j--;
		if (i <= j)
		{
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
			i++;
			j--;
		}
	} while (i <= j);

	if (start < j)
		quick(data, start, j);

	if (i < end)
		quick(data, i, end);
}
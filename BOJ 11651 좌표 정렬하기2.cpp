#include <iostream>

using namespace std;

struct arr {
	int location[2];
};

void Quick(arr *data, int start, int end, bool xy) {
	int left = start;
	int right = end;
	int pivot = data[(start + end) / 2].location[xy];
	arr temp;

	do {
		while (data[left].location[xy] < pivot)
			left++;
		while (data[right].location[xy] > pivot)
			right--;

		if (left <= right) {
			temp = data[left];
			data[left] = data[right];
			data[right] = temp;
			left++;
			right--;
		}
	} while (left <= right);

	if (start < right)
		Quick(data, start, right, xy);
	if (end > left)
		Quick(data, left, end, xy);
}

int main() {
	int N;
	cin >> N;
	arr *data = new arr[N];

	int index = 0;

	for (int i = 0; i < N; i++) {
		cin >> data[i].location[0] >> data[i].location[1];
	}

	Quick(data, 0, N - 1, 1);

	for (int i = 0; i < N - 1; i++) {
		if (data[i].location[1] != data[i + 1].location[1]) {
			Quick(data, index, i, 0);
			index = i + 1;
		}
	}

	Quick(data, index, N-1, 0);

	for (int i = 0; i < N; i++) {
		cout << data[i].location[0] << " " << data[i].location[1] << "\n";
	}

	delete data;
}
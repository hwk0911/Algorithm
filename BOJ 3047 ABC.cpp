#include <iostream>

using namespace std;

void Quick(int *data, int start, int end) {
	int left = start;
	int right = end;
	int pivot = data[(start + end) / 2];
	int temp;

	do {
		while (data[left] < pivot)
			left++;
		while (data[right] > pivot)
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
		Quick(data, start, right);
	if (end > left)
		Quick(data, left, end);
}

int main() {
	int data[3];
	char order[3];
	for (int i = 0; i < 3; i++)
		cin >> data[i];

	for (int i = 0; i < 3; i++) {
		cin >> order[i];
	}
	Quick(data, 0, 2);
	
	for (int i = 0; i < 3; i++) {
		cout << data[(int)order[i] - 65] << " ";
	}
}
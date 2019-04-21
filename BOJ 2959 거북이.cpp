#include <iostream>

using namespace std;

void Quick(int data[], int start, int end) {
	int left = start;
	int right = end;
	int pivot = data[(left + right) / 2];
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

	if (right > start)
		Quick(data, start, right);
	if (left < end)
		Quick(data, left, end);
}

int main() {
	int data[4];

	cin >> data[0];
	cin >> data[1];
	cin >> data[2];
	cin >> data[3];

	Quick(data, 0, 3);

	cout << data[0] * data[2];
}
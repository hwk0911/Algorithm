#include <iostream>
#include <string>

using namespace std;

struct arr {
	int age[2];
	string name = "";
};

void Quick(arr *data, int start, int end, int search);

int main() {
	int N;
	int index = 0;
	cin >> N;

	arr *data = new arr[N];

	for (int i = 0; i < N; i++) {
		cin >> data[i].age[0] >> data[i].name;
		data[i].age[1] = i;
	}

	Quick(data, 0, N - 1, 0);

	for (int i = 0; i < N - 1; i++) {
		if (data[i].age[0] != data[i + 1].age[0]) {
			Quick(data, index, i, 1);
			index = i + 1;
		}
	}
	Quick(data, index, N - 1, 1);

	for (int i = 0; i < N; i++)
		cout << data[i].age[0] << " " << data[i].name << "\n";
}

void Quick(arr *data, int start, int end, int search) {
	int left = start;
	int right = end;
	int pivot = data[(start + end) / 2].age[search];
	arr temp;

	do {
		while (data[left].age[search] < pivot)
			left++;
		while (data[right].age[search] > pivot)
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
		Quick(data, start, right, search);
	if (end > left)
		Quick(data, left, end, search);
}
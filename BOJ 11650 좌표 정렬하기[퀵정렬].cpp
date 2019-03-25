#include <iostream>

using namespace std;

struct arr {
	int x;
	int y;
};

void QuickX(arr *data, int start, int end);
void QuickY(arr *data, int start, int end);

int main() {
	cin.tie(NULL);
	std::ios::sync_with_stdio(false);
	arr *data;
	arr temp;
	int N;
	int index = 0;
	cin >> N;

	data = new arr[N];
	for (int i = 0; i < N; i++) {
		cin >> data[i].x;
		cin >> data[i].y;
	}

	//x��ǥ �켱���� ������
	QuickX(data, 0, N - 1);

	//stable_sort ����
	for (int i = 0; i < N - 1; i++) {
		if (data[i].x != data[i + 1].x) {
			QuickY(data, index, i);
			index = i + 1;
		}
	}
	//������ �׸� ����
	QuickY(data, index, N - 1);

	//���
	for (int i = 0; i < N; i++) {
		cout << data[i].x << " " << data[i].y << "\n";
	}
}

void QuickX(arr *data, int start, int end) {
	int left = start;
	int right = end;
	int pivot = data[(start + end) / 2].x;
	arr temp;

	while(left <= right)
	{
		while (data[left].x < pivot)
			left++;
		while (data[right].x > pivot)
			right--;

		if (left <= right) {
			temp = data[left];
			data[left] = data[right];
			data[right] = temp;
			left++;
			right--;
		}
	}
	
	if (start < right)
		QuickX(data, start, right);
	if (end > left)
		QuickX(data, left, end);
}

//y��ǥ ������
void QuickY(arr *data, int start, int end) {
	int left = start;
	int right = end;
	int pivot = data[(start + end) / 2].y;
	arr temp;

	while(left <= right)
	{
		while (data[left].y < pivot)
			left++;
		while (data[right].y > pivot)
			right--;

		if (left <= right) {
			temp = data[left];
			data[left] = data[right];
			data[right] = temp;
			left++;
			right--;
		}
	}
	
	if (start < right)
		QuickY(data, start, right);
	if (end > left)
		QuickY(data, left, end);
}
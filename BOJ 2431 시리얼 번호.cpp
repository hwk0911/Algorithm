#include <iostream>
#include <string>

using namespace std;

void Quick(string *data, int start, int end) {
	int left = start;
	int right = end;
	string pivot = data[(left + right) / 2];
	string temp;

	while (left <= right) {
		while (left <= right && data[left].compare(pivot) <= 0)
			left++;
		while (right >= left && data[right].compare(pivot) >= 0)
			right--;

		if (left <= right) {
			temp = data[left];
			data[left] = data[right];
			data[right] = temp;
			left++;
			right--;
		}
	}

	if (right > start)
		Quick(data, start, right);
	if (left < end)
		Quick(data, left, end);
}

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int N;
	string *data;
	cin >> N;
	data = new string[N];

	for (int i = 0; i < N; i++) {
		cin >> data[i];
	}

	Quick(data, 0, N - 1);

	for (int i = 0; i < N; i++) {
		cout << data[i] << "\n";
	}
}
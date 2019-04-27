#include <iostream>
#include <string>

using namespace std;

void Quick(string *data, int start, int end) {
	int left = start;
	int right = end;
	string pivot = data[(left + right) / 2];
	string temp;

	do {
		while (pivot.compare(data[left]) > 0)
			left++;
		while (pivot.compare(data[right]) < 0)
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
	string S;
	string *data;

	cin >> S;
	data = new string[S.length()];

	for (int i = 0; i < S.length(); i++) {
		data[i] = S.substr(i, S.length() - i);
	}

	Quick(data, 0, S.length() - 1);

	for (int i = 0; i < S.length(); i++)
		cout << data[i] << "\n";
}
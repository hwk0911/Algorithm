#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int N;
	int num;
	int dMin = 0, dMax = 0;
	float sum = 0;
	vector <int> arr;

	int frequency_Plus[4000];
	int frequency_Minus[4000];
	int frequency_p = 0;
	int frequency_m = 0;

	for (int i = 0; i < 4000; i++) {
		frequency_Plus[i] = 0;
		frequency_Minus[i] = 0;
	}

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> num;
		arr.push_back(num);
		sum += num;
		dMin = min(dMin, num);
		dMax = max(dMax, num);
		if (num < 0)
			frequency_Minus[num]++;
		else
			frequency_Plus[num]++;
	}

	if (sum / (int)sum < 0.5)
		cout << (int)sum++ << "\n";
	else
		cout << (int)sum << "\n";

	sort(arr.begin(), arr.end());
	cout << arr[N / 2] << "\n";

	for (int i = 0; i < N; i++) {
		frequency_m = (frequency_m, frequency_Minus[i]);
		frequency_p = (frequency_p, frequency_Plus[i]);
	}
	cout << frequency << "\n";
	cout << dMax - dMin;
}
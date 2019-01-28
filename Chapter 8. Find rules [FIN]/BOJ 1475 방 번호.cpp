#include <iostream>
#include <string>

using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	string N;
	int num[10];
	int max = 0;
	for (int i = 0; i < 10; i++)
		num[i] = 0;
	cin >> N;
	for (int i = 0; i < N.size(); i++) {
		if ((int)(N.at(i) - 48) == 6)
			num[9]++;
		else
			num[(int)(N.at(i) - 48)]++;
	}

	if (num[9] % 2 == 0) {
		num[9] /= 2;
	}
	else {
		num[9] = (num[9] / 2) + 1;
	}

	for (int i = 0; i < 10; i++) {
		if (num[max] < num[i])
			max = i;
	}
	cout << num[max];
}

/*
Input 1:
9999

Output 1:
2
*/
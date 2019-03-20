#include <iostream>

using namespace std;

int main() {
	int N, car, count = 0;

	cin >> N;
	cin >> car;
	if (N == car)
		count++;

	cin >> car;
	if (N == car)
		count++;

	cin >> car;
	if (N == car)
		count++;

	cin >> car;
	if (N == car)
		count++;

	cin >> car;
	if (N == car)
		count++;

	cout << count;
}
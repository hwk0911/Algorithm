#include <iostream>

using namespace std;

int main() {
	int total;
	int price;

	cin >> total;

	for (int i = 0; i < 9; i++) {
		cin >> price;
		total -= price;
	}
	cout << total;
}
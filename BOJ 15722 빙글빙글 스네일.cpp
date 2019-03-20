#include <iostream>

using namespace std;

int main() {
	int n;
	int x = 0, y = 0;
	bool check = true;
	bool check2 = true;
	int j = 0;

	cin >> n;

	for (int i = 1; j < n;i++) {
		for (int k = 0; k < i && j < n; k++,j++) {
			if (check) {
				if (check2)
					y++;
				else
					y--;
			}
			else {
				if (check2)
					x++;
				else
					x--;
			}
		}
		check = !check;
		for (int k = 0; k < i && j < n; k++, j++) {
			if (check) {
				if (check2)
					y++;
				else
					y--;
			}
			else {
				if (check2)
					x++;
				else
					x--;
			}
		}
		check = !check;
		check2 = !check2;
	}
	cout << x << " " << y;
}
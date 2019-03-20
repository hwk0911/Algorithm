#include <iostream>

using namespace std;

int main() {
	int h, w, t = 2000;
	
	for (int i = 0; i < 3; i++) {
		cin >> h;
		if (t >= h)
			t = h;
	}
	h = t;
	t = 2000;
	for (int i = 0; i < 2; i++) {
		cin >> w;
		if (t >= w)
			t = w;
	}
	cout << h + t - 50;
}
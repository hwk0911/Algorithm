#include <iostream>

using namespace std;

int main() {
	short tri[55] = {1,};
	short com[56] = {0,};
	int N;
	short div;
	short ans = 0;

	for (int i = 1; i < 56; i++) {
		com[i] = com[i-1] + i;
	}
	for (int i = 1; i < 55; i++) {
		tri[i] = com[i+1] + tri[i - 1];
	}
	while (1) {
		cin >> N;
		for (int i = 54; i >= 0; i--) {
			if (tri[i] <= N) {
				div = i;
				break;
			}
		}

		while (N) {
			ans += N / tri[div];
			N %= tri[div];
			div--;
		}
		cout << ans << endl;;
		ans = 0;
	}
}
#include <iostream>

using namespace std;

int main() {
	int N, K, NK;
	int ans = 1;
	int div = 1;
	cin >> N >> K;
	NK = N - K;

	for (int i = N; i; i--) {
		ans *= N;
		N--;
		if (K != 0) {
			div *= K;
			K--;
		}
		if (NK != 0) {
			div *= NK;
			NK--;
		}
	}
	cout << ans/div;
}
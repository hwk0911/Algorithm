#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	char seat;
	int N;
	bool flag = true;
	float count = 0;
	cin >> N;
	
	for (; N; N--) {
		cin >> seat;
		if (seat == 'S')
			count++;
		else {
			count += 0.5;
			flag = false;
		}
	}
	
	if (flag)
		cout << (int)count;
	else
		cout << (int)count + 1;
}
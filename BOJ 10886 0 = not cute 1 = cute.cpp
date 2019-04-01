#include <iostream>

using namespace std;

#define no "Junhee is not cute!"
#define yes "Junhee is cute!"

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N;
	bool answer = 0;
	int count = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> answer;
		if (answer)
			count++;
		else
			count--;
	}

	if (count > 0)
		cout << yes;
	else
		cout << no;
}
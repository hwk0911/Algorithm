#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int at;

	int count = 1;
	cin >> at;

	for (int i = 1; i < at; ) {
		i += (count * 6);
		count++;
	}
	cout << count;
}

/*
Input 1:
13

Output 1:
3
*/
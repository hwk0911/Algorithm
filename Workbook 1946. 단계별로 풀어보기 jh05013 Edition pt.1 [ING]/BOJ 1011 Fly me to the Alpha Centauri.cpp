#include <iostream>

using namespace std;
#define roop 93000

int main() {
	int arr[roop];
	int move = 1;
	int target;
	int X, Y;
	int caseNum;
	cin >> caseNum;

	for (int i = 0; i < roop; i += 2) {
		arr[i] = move;
		arr[i + 1] = move;
		move++;
	}

	for (int tryNum = 0; tryNum < caseNum; tryNum++) {

		cin >> X >> Y;
		target = Y - X;

		for (int i = 0; i < roop; i++) {
			if (target <= 0) {
				cout << i;
				break;
			}
			target -= arr[i];
		}
		if (tryNum != caseNum - 1)
			cout << endl;
	}
}

/*
Input 1:
3
0 3
1 5
45 50

Output 1:
3
3
4
*/
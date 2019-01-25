#include <iostream>

using namespace std;

int main() {
	char arr[80];
	int testCase;
	int count = 0;
	int score = 0;

	cin >> testCase;

	for (int i = 0; i < 80; i++) {
		arr[i] = ' ';
	}

	for (int i = 0; i < testCase; i++) {
		cin >> arr;
		for (int j = 0; j < 80; j++) {
			if (count == 0) {
				if (arr[j] == 'O')
					count++;
				else if (arr[j] == 'X')
					count = 0;
				else
					break;
			}
			else {
				if (arr[j] == 'O')
					count++;
				else if (arr[j] == 'X')
					count = 0;
				else break;
			}
			score += count;

		}
		cout << score << "\n";
		score = 0;
		count = 0;
		for (int k = 0; k < 80; k++) {
			arr[k] = ' ';
		}
	}

}

/*
Input 1:
5
OOXXOXXOOO
OOXXOOXXOO
OXOXOXOXOXOXOX
OOOOOOOOOO
OOOOXOOOOXOOOOX

Output 1:
10
9
7
55
30
*/
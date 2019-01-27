#include <iostream>
#include <string>

using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string firstNum = "";
	string secondNum = "";
	int check = 10;

	cin >> firstNum;
	cin >> secondNum;

	for (int i = 2; i >= 0; i--) {
		if (firstNum.at(i) > secondNum.at(i)) {
			check = 0;
			break;
		}
		else if (firstNum.at(i) < secondNum.at(i)) {
			check = 1;
			break;
		}
		else {}
	}

	if (check == 0)
		for (int i = 2; i >= 0; i--)
			cout << firstNum.at(i);
	else
		for (int i = 2; i >= 0; i--)
			cout << secondNum.at(i);
}

/*
Input 1:
734 893

Output 1:
437
*/
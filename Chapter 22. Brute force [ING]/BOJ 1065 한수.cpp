#include <iostream>
#include <string>

using namespace std;

class hansu {
public:
	int number;
	hansu() {
		cin >> number;
		getHansu(number);
	}
	int getHansu(int a);
};

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	hansu h;
}

int hansu::getHansu(int a)
{
	int count = 0;
	string number;
	if (a > 99) {

		count += 99;
		for (int j = 100; j <= a; j++) {
			number = to_string(j);
			if (j == 1000)
				break;
			else if (number.at(2) - number.at(1) == number.at(1) - number.at(0))
				count++;
		}
	}
	else {
		for (int i = 1; i <= a; i++)
			count++;
	}
	cout << count;

	return 0;
}

/*
Input 1:
110

Output 1:
99
*/
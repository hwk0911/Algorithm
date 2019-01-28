#include <iostream>

using namespace std;

int main()
{
	int month, day, sumDay = 0;;
	cin >> month >> day;

	for (int i = 1; i < month; i++)
	{
		switch (i) {
		case 4:
		case 6:
		case 9:
		case 11:
			sumDay += 30;
			break;
		case 2:
			sumDay += 28;
			break;
		default:
			sumDay += 31;
			break;
		}
	}

	sumDay += day - 1;

	day = sumDay % 7;

	switch (day)
	{
	case 0:
		cout << "MON";
		break;
	case 1:
		cout << "TUE";
		break;
	case 2:
		cout << "WED";
		break;
	case 3:
		cout << "THU";
		break;
	case 4:
		cout << "FRI";
		break;
	case 5:
		cout << "SAT";
		break;
	case 6:
		cout << "SUN";
		break;

	}
}

/*
Input 1:
1 1

Output 1:
MON

Input 2:
3 14

Output 2:
WED

Input 3:
9 2

Output 3:
SUN

Input 4:
12 25

Output 4:
TUE
*/
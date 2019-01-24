#include <iostream>
using namespace std;
int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cout.setf(ios::fixed);
	cout.precision(3);

	int number, ten, one, changeNumber;
	int count = 1;
	cin >> number;

	if (number < 10)
		number * 10;
	ten = number / 10;
	one = number % 10;
	changeNumber = (one * 10) + ((ten + one) % 10);

	while (number != changeNumber)
	{
		ten = changeNumber / 10;
		one = changeNumber % 10;
		changeNumber = (one * 10) + ((ten + one) % 10);
		count++;
	}
	cout << count;
}


/*
Input 1:
26

Output 1:
4

Input 2:
55

Output 2:
3

Input 3:
1

Output 3:
60
*/
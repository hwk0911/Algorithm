#include <iostream>
#include <string>

using namespace std;

int main()
{
	string nums = "";
	int num;
	int sum = 0;

	cin >> num;
	cin >> nums;

	for (int i = 0; i < nums.length(); i++)
		sum += ((int)nums.at(i) - 48);

	cout << sum;
}

/*
Input 1:
1
1

Output 1:
1

Input 2:
5
54321

Output 2:
15

Input 3:
25
7000000000000000000000000

Output 3:
7

Input 4:
11
10987654321

Output 4:
46
*/
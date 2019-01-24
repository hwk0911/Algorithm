#include <iostream>
using namespace std;
int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	short a, b;
	cin >> a >> b;
	while (cin >> a)
		if (a < b)
			cout << a << " ";
}

/*
Input 1:
10 5
1 10 4 9 2 3 8 5 7 6

Output 1:
1 4 2 3
*/
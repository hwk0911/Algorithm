#include <iostream>

using namespace std;

void GetSelf(int[], int i);
void PrintSelf(int[]);


int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int self[10001];
	int i = 1;
	GetSelf(self, i);
}

void GetSelf(int a[], int i)
{
	int saveNumber = 0;
	for (i = 1; i < 10001; i++)
	{
		saveNumber = 0;
		for (int j = i; j > 0;)
		{
			saveNumber += j % 10;
			j = j / 10;
		}
		if (saveNumber + i < 10001)
			a[saveNumber + i] = 1;
	}
	PrintSelf(a);
}
void PrintSelf(int a[])
{
	for (int i = 1; i < 10001; i++)
		if (a[i] != 1) {
			cout << i << "\n";
		}
}

/*
Input 1:

Output 1:
1
3
5
7
9
20
31
42
53
64
 |
 |       <-- a lot more numbers
 |
9903
9914
9925
9927
9938
9949
9960
9971
9982
9993
*/
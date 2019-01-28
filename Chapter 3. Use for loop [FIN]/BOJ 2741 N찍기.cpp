#include <iostream>

int ab(int a);

int main()
{
	int a;
	scanf("%d", &a);
	ab(a);
}

int ab(int a)
{
	int i = 0;
	a++;
	for (i = 1; i < a; i++)
	{
		printf("%d\n", i);
	}

	return 0;
}

/*
Input 1:
5

Output 1:
1
2
3
4
5
*/
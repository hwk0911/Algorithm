void result(int a);

int main()
{
	int firstNumber;
	scanf("%d", &firstNumber);
	result(firstNumber);
}

void result(int a)
{
	int i = 0;
	for (i = 0; a > i; a--)
		printf("%d\n", a);
}


/*
Input 1:
5

Output 1:
5
4
3
2
1
*/
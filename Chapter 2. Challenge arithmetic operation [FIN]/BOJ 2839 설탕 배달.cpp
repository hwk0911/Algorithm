#include <iostream>
int main() {
	int sugar;
	int count;
	scanf("%d", &sugar);
	for (count = 0; sugar % 5 != 0 && sugar >= 3; count++)
		sugar = sugar - 3;
	if (sugar % 5 == 0)
		count += sugar / 5;
	else
		count = -1;
	printf("%d", count);
}

/*
Input 1:
18

Output 1:
4

Input 2:
4

Output 2:
-1

Input 3:
6

Output 3:
2

Input 4:
9

Output 4:
3

Input 5:
11

Output 5:
3
*/
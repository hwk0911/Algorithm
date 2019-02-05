#include <iostream>

int main() {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int a, b, c, d;
	int count = 0;

	for (int i = 0; i < 3; i++) {
		std::cin >> a >> b >> c >> d;

		if (a == 0)
			count++;
		if (b == 0)
			count++;
		if (c == 0)
			count++;
		if (d == 0)
			count++;

		switch (count)
		{
		case 0:
			std::cout << "E\n";
			break;
		case 1:
			std::cout << "A\n";
			break;
		case 2:
			std::cout << "B\n";
			break;
		case 3:
			std::cout << "C\n";
			break;
		case 4:
			std::cout << "D\n";
		}
		count = 0;
	}

}

/*
Input 1:
0 1 0 1
1 1 1 0
0 0 1 1

Output 1:
B
A
B
*/


/*
Input 1:
0 1 0 1
1 1 1 0
0 0 1 1

Output 1:
B
A
B
*/
#include <iostream>
#include <string>

using namespace std;

int main() {

	int num;
	int count = 0;
	int fg;
	char word;
	string a;


	cin >> num;

	for (int i = 0; i < num; i++)
	{
		cin >> a;
		word = a.at(0);

		for (int j = 0; j < a.length() - 1; j++)
		{
			if (word != a.at(j + 1))
			{
				for (int k = j + 2; k < a.length(); k++)
				{
					if (word == a.at(k))
					{
						count--;
						fg = 0;
						break;
					}
				}
				if (fg == 0)
				{
					fg = 1;
					break;
				}
			}
			word = a.at(j + 1);
		}
		count++;
	}
	cout << count;
}

/*
Input 1:
3
happy
new
year

Output 1:
3

Input 2:
4
aba
abab
abcabc
a

Output 2:
1
*/
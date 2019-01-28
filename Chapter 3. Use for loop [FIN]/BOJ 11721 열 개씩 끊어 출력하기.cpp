#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sentence = "";
	int hold = 1;
	int j = 0;
	cin >> sentence;

	for (int i = 0; i < sentence.length() + 1; i++)
	{
		for (j; j < hold * 10 && j < sentence.length(); j++)
		{
			cout << sentence.at(j);
		}
		hold++;
		i = j;
		cout << endl;
	}
}

/*
Input 1:
BaekjoonOnlineJudge

Output 1:
BaekjoonOn
lineJudge

Input 2:
OneTwoThreeFourFiveSixSevenEightNineTen

Output 2:
OneTwoThre
eFourFiveS
ixSevenEig
htNineTen

*/
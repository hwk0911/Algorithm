#include <iostream>
using namespace std;
int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cout.setf(ios::fixed);
	cout.precision(2);

	int count;
	unsigned short getScore = 0, maxScore = 0;
	cin >> count;

	float *score = new float[count + 1];
	score[count + 1] = 0;
	for (int i = 0; i < count; i++)
	{
		score[i] = 0;
		if (cin >> getScore && maxScore < getScore)
		{
			maxScore = getScore;
		}
		score[i] = getScore;
	}
	for (int i = 0; i < count; i++)
	{
		score[count + 1] += score[i] / maxScore * 100;
	}
	cout << score[count + 1] / count;
}

/*
Input 1:
3
40 80 60

Output 1:
75.00

Input 2:
3
10 20 30

Output 2:
66.666667

Input 3:
4
1 100 100 100

Output 3:
75.25

Input 4:
5
1 2 4 8 16

Output 4:
38.75

Input 5:
2
3 10

Output 5:
65.00
*/
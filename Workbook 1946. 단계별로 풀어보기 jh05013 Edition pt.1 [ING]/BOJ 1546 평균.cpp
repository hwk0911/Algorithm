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
*/
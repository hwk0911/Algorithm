#include <iostream>
using namespace std;
int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cout.setf(ios::fixed);
	cout.precision(3);

	float *avgArr = NULL;
	int **scoreArr = NULL;
	int testCase;
	int scoreCount;
	int count = 0;
	float sumScore;


	cin >> testCase;
	avgArr = new float[testCase];
	scoreArr = new int*[testCase];
	for (int i = 0; i < testCase; i++)
	{
		avgArr[i] = 0;
		sumScore = 0;
		cin >> count;
		scoreArr[i] = new int[count];

		for (int j = 0; j < count; j++)
		{
			cin >> scoreArr[i][j];
			sumScore += (float)scoreArr[i][j];
		}
		for (int j = 0; j < count; j++)
		{
			if (sumScore / count < (float)scoreArr[i][j])
				avgArr[i] ++;
		}
		avgArr[i] = avgArr[i] / count * 100;
	}
	for (int i = 0; i < testCase; i++)
		cout << avgArr[i] << "%\n";
}

/*
Input 1:
5
5 50 50 70 80 100
7 100 95 90 80 70 60 50
3 70 90 80
3 70 90 81
9 100 99 98 97 96 95 94 93 91

Output 1:
40.000%
57.143%
33.333%
66.667%
55.556%
*/
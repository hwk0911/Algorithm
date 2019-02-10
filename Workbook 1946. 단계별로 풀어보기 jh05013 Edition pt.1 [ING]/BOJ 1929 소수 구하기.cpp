#include <iostream>
#include <math.h>

using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int M, N;
	bool *numArr;
	cin >> M >> N;
	numArr = new bool[N + 1];

	numArr[0] = false;
	numArr[1] = false;

	for (int i = 2; i <= N; i++) {
		numArr[i] = true;
	}

	for (int i = 2, j = 2; pow(i, 2) <= N; i++) {
		if (numArr[i]) {
			numArr[(int)pow(i, 2)] = false;
			for (int j = 2; i * j <= N; j++)
				numArr[i*j] = false;
		}
	}
	for (int i = M; i <= N; i++)
		if (numArr[i])
			printf("%d\n", i);

	delete[]numArr;
}

/*cout ���� cin.tie(NULL);
			 ios::sync_with_stdio(false);
	   �� ����ص� printf ��ŭ�� �ӵ��� ������ �ʴ´�....
	   cout �� printf �� ó���ӵ��� 1, 1,000,000 �Է½� 10.2�� ���� ����*/

/*
Input 1:
3 16

Output 1:
3
5
7
11
13
*/
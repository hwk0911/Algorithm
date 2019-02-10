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

/*cout 사용시 cin.tie(NULL);
			 ios::sync_with_stdio(false);
	   를 사용해도 printf 만큼의 속도가 나오지 않는다....
	   cout 과 printf 의 처리속도는 1, 1,000,000 입력시 10.2초 정도 차이*/

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
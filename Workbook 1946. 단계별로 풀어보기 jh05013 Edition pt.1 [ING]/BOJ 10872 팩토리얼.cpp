#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;

	for (int i = N-1; i > 1; i--) {
		N *= i;
	}
	if (N == 0)
		N = 1;

	cout << N;

}

/*
Input 1:
10

Output 1:
3628800
*/

/*
추가설명 :
문제의 입력 범위는 0 ~ 12
0! 의 값은 0이 아닌 1이 된다.
간단한 예시로
3명을 줄 세우는 방법은 3! = 6
0명을 줄 세우는 방법은 없다 하나이므로 1 이 된다.
*/
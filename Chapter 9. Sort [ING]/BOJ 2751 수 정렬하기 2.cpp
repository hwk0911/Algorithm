#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int N;
	int *pArr;
	cin >> N;
	pArr = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> pArr[i];
	}

	sort(pArr, pArr+N);

	for (int i = 0; i < N; i++) {
		cout << pArr[i] << "\n";
	}
}

/*
Input 1:
5
5
4
3
2
1

Output 1:
1
2
3
4
5
*/
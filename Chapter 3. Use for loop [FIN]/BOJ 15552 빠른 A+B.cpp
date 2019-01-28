#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int A = 0, B = 0;
	int i = 0;
	int *result;

	cin >> i;
	result = new int[i];

	for (int j = 0; j < i; j++)
	{
		cin >> A >> B;
		result[j] = A + B;
	}

	for (int k = 0; k < i; k++)
		cout << result[k] << "\n";
}

/*
Input 1:
5
1 1
12 34
5 500
40 60
1000 1000

Output 1:
2
46
505
100
2000
*/
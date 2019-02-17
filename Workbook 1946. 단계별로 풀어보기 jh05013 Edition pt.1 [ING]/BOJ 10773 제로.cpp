#include <iostream>
#include <vector>

#define for(i,K) for(int i = 0 ; i < K ; i++)

using namespace std;

int main() {
	vector <int> arr;
	int K, a;
	cin >> K;

	for (i, K) {
		cin >> a;
		if (a | 0)
			arr.push_back(a);
		else
			arr.pop_back();
	}
	a = 0;

	for (i, arr.size()) {
		a += arr[i];
	}
	cout << a;
}

/*
Input 1:
4
3
0
4
0

Output 1:
0
*/
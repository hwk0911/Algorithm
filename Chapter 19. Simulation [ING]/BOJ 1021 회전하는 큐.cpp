#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int N, M;
	cin >> N >> M;

	vector<int> vec;
	for (int i = 0; i < N; i++)
		vec.push_back(i + 1);


	int *find = new int[M];
	for (int i = 0; i < M; i++) {
		cin >> find[i];
	}

	int count = 0;
	for (int i = 0; i < M; i++) {

		int pivot = 0;
		for (; pivot < vec.size(); pivot++)
			if (vec[pivot] == find[i])
				break;


		int leftMove = pivot;
		int rightMove = (int)vec.size() - pivot;
		count += min(leftMove, rightMove);

		vector<int> vec2;


		for (int i = pivot + 1; i < vec.size(); i++)
			vec2.push_back(vec[i]);

		for (int i = 0; i < pivot; i++)
			vec2.push_back(vec[i]);

		vec = vec2;
	}
	cout << count;
}


/*
Input 1:
10 3
1 2 3

Output 1:
0

Input 2:
10 3
2 9 5

Output 2:
8
*/
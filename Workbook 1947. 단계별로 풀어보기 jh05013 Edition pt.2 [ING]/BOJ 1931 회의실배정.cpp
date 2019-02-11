#include <iostream>
#include <algorithm>

#define MAX 4294967295;

using namespace std;

struct conference {
	unsigned int start;
	unsigned int end;
	unsigned int usingTime = start - end;
};

bool cmp(const conference &p1, const conference &p2);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N; //회의 수
	int pivotEnd, check = 0;
	unsigned int saveEnd = 0, saveStart = MAX;
	int count = 0;

	cin >> N;

	conference *c;
	c = new conference[N];

	for (int i = 0; i < N; i++)
		cin >> c[i].start >> c[i].end;

	sort(c, c + N, cmp);
	saveStart = c[0].start;
	for (int i = 0; i < N; i++) {
		if (saveStart <= c[i].start) {
			saveStart = c[i].end;
			count += 1;
		}
	}

	cout << count;
}

bool cmp(const conference &p1, const conference &p2) {
	if (p1.end < p2.end) {
		return true;
	}
	else if (p1.end == p2.end) {
		return p1.start < p2.start;
	}
	else {
		return false;
	}

	// x순으로 정렬하고 x값이 같으면 y순으로 각각 오른차순으로 정렬
}

/*
Input 1:
11
1 4
3 5
0 6
5 7
3 8
5 9
6 10
8 11
8 12
2 13
12 14

Output 1:
4
*/
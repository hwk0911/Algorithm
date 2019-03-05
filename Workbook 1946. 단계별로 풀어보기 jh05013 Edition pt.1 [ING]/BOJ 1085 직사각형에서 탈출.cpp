#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int x, y, w, h;
	int answer;
	int answer_2;
	cin >> x >> y >> w >> h;

	answer = min(w - x, h - y);
	answer_2 = min(x, y);

	cout << min(answer, answer_2);
}

/*
Input 1:
6 2 10 3

Output 1:
1
*/
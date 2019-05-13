#include <iostream>
#define MAX2(a,b) (a) > (b) ? (a) : (b)
using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int total = 0;
	int answer = 0;
	int enter, exit;

	for (int i = 4; i; i--) {
		cin >> exit >> enter;
		total += enter;
		total -= exit;
		answer = MAX2(answer, total);
	}

	cout << answer;
}
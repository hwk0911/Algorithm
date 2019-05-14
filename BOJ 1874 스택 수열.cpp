#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int N;
	vector<int>data;
	vector<int>stack;
	vector<char>answer;
	int a;

	cin >> N;

	for (int i = N; i; i--) {
		cin >> a;
		data.push_back(a);
	}
	for (int i = 0; i < N; i++) {
		stack.push_back(i + 1);
		answer.push_back('+');
		if (stack.back() == data.front()) {
			for (int j = stack.size(); j; j--) {
				if (stack.back() == data.front()) {
					answer.push_back('-');
					stack.erase(stack.begin() + stack.size() - 1);
					data.erase(data.begin() + 0);
				}
				else
					break;
			}
		}
	}
	if (answer.size() != N * 2)
		cout << "NO";
	else {
		for (char a : answer) {
			cout << a << "\n";
		}
	}
}
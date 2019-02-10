#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string command;
	int N;
	int num;
	vector <int>stackArr;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> command;
		if (command == "push") {
			cin >> num;
			stackArr.push_back(num);
		}
		else {
			if (command == "pop") {
				if (stackArr.size() != 0) {
					cout << stackArr.back();
					stackArr.pop_back();
				}
				else
					cout << -1;
			}
			else if (command == "size") {
				cout << stackArr.size();
			}
			else if (command == "empty") {
				if (stackArr.size())
					cout << 0;
				else
					cout << 1;
			}
			else {
				if (stackArr.size() != 0)
					cout << stackArr.back();
				else
					cout << -1;
			}
			cout << "\n";
		}
	}
}

/*
push X: 정수 X를 스택에 넣는 연산이다.
pop: 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 스택에 들어있는 정수의 개수를 출력한다.
empty: 스택이 비어있으면 1, 아니면 0을 출력한다.
top: 스택의 가장 위에 있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
*/

/*
Input 1:
14
push 1
push 2
top
size
empty
pop
pop
pop
size
empty
pop
push 3
empty
top

Output 1:
2
2
0
2
1
-1
0
1
-1
0
3
*/
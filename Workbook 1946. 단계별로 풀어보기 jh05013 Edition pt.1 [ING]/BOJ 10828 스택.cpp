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
push X: ���� X�� ���ÿ� �ִ� �����̴�.
pop: ���ÿ��� ���� ���� �ִ� ������ ����, �� ���� ����Ѵ�. ���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
size: ���ÿ� ����ִ� ������ ������ ����Ѵ�.
empty: ������ ��������� 1, �ƴϸ� 0�� ����Ѵ�.
top: ������ ���� ���� �ִ� ������ ����Ѵ�. ���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
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
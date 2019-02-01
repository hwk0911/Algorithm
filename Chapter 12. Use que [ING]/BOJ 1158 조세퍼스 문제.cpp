#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, m, o, i = 0;
	cin >> n >> m;
	o = m;
	m = m - 1;

	vector <int> arr;
	vector <int> answer;
	for (int i = 1; i <= n; i++) {
		arr.push_back(i);
	}

	while (arr.size() != answer.size()) {
		if (m > arr.size() - 1) {
			m = m - (arr.size() - 1) - 1;
		}
		else {
			if (arr[i] == 0)
				m++;
			else if (i == m) {
				answer.push_back(arr[i]);
				arr[i] = 0;
				m += o;
			}
			i++;
		}
		if (i > arr.size() - 1) {
			i = 0;
		}
	}
	cout << "<";
	for (int i = 0; i < answer.size() - 1; i++) {
		cout << answer[i] << ", ";
	}
	cout << answer.back() << ">";
}

/*
Input 1:
7 3

Output 1:
<3, 6, 2, 7, 5, 1, 4>
*/
#include <iostream>
#include <string>

using namespace std;

int solution(string a,int at);

int main() {
	string brackets, VPS;
	int count_1 = 0;
	int count_2 = 0;
	int answer = 0;

	cin >> brackets;

	for (int i = 0; i < brackets.size(); i++) {
		if (brackets.at(i) == '(')
			count_1++;
		else if (brackets.at(i) == ')')
			count_1--;
		else if (brackets.at(i) == '[')
			count_2++;
		else
			count_2--;

		if (count_1 < 0 || count_2 < 0)
			break;
	}
	if (count_1 == 0 && count_2 == 0) {
		for (int i = 0, j = 0; i < brackets.size(); i++) {
			VPS += brackets.at(i);
			if (brackets.at(i) == '(' || brackets.at(i) == '[')
				j++;
			else
				j--;

			if (j == 0) {
				answer += solution(VPS, 0);
				VPS = "";
			}
		}
		cout << answer;
	}
	else
		cout << 0;
}

int solution(string a, int at) {
	if (at > a.size()-1)
		return 0;
	if (a.at(at) == '(' && a.at(at + 1) == '(')
		return 2 * solution(a, at + 1);
	else if (a.at(at) == '(' && a.at(at + 1) == ')')
		return 2 + solution(a, at + 1);
	else if (a.at(at) == '(' && a.at(at + 1) == '[')
		return 2 * solution(a, at + 1);
	else if (a.at(at) == '[' && a.at(at + 1) == '(')
		return 3 * solution(a, at + 1);
	else if (a.at(at) == '[' && a.at(at + 1) == ']')
		return 3 + solution(a, at + 1);
	else if (a.at(at) == '[' && a.at(at + 1) == '[')
		return 3 * solution(a, at + 1);
	else
		return solution(a, at + 1);
}

/*
Input 1:
(()[[]])([])

Output 1:
28
*/
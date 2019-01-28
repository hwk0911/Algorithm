#include <iostream>
#include <string>
using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	short caseNum;
	short roopNum;
	string charArr;
	cin >> caseNum;
	for (int i = 0; i < caseNum; i++) {
		cin >> roopNum;
		cin >> charArr;
		for (int j = 0; j < charArr.length(); j++)
			for (int k = 0; k < roopNum; k++)
				cout << charArr.at(j);
		cout << "\n";
	}
}

/*
Input 1:
2
3 ABC
5 /HTP

Output 1:
AAABBBCCC
/////HHHHHTTTTTPPPPP
*/
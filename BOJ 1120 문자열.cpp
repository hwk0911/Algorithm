#include <iostream>
#include <string>

#define MIN2(a,b) (a) < (b) ? (a) : (b)

using namespace std;

int main() {
	string A;
	string B;

	int answer = 51;
	int count = 0;

	cin >> A >> B;

	for (int i = 0; A.length() + i <= B.length(); i++) {
		for (int j = 0; j < A.length(); j++) {
			if (A.at(j) != B.at(i + j))
				count++;
		}
		answer = MIN2(answer, count);
		count = 0;
	}

	cout << answer;
}
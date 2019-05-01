#include <iostream>
#include <vector>

using namespace std;

int main() {
	char *bd;
	int N;
	int answer = 1;
	vector <int> length;

	cin >> N;
	bd = new char[N];

	cin >> bd;

	for (int i = 0; i < N - 1; i++) {
		if (bd[i] == 'R' && bd[i + 1] == 'B')
			answer++;
		else if (bd[i] == bd[i + 1]) {
			length.push_back(answer);
			answer = 1;
		}
		else if (bd[i] == 'B' && bd[i + 1] == 'R')
			answer++;
		else if (bd[i] == 'V') {
			length.push_back(answer);
			answer = 1;
		}

	}
	length.push_back(answer);

	answer = 0;

	for (int i = 0; i < length.size(); i++) {
		if (answer < length[i])
			answer = length[i];
	}

	cout << answer;
}
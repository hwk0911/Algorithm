#include <iostream>
#include <string>

using namespace std;

int main() {
	string N;
	string M;
	int data[26] = { 0, };
	int data_2[26] = { 0, };
	int answer = 0;

	cin >> N;
	cin >> M;

	for (int i = 0; i < N.length(); i++) {
		data[(int)(N.at(i) - 'a')]++;
	}
	for (int i = 0; i < M.length(); i++) {
		data_2[(int)(M.at(i) - 'a')]++;
	}

	for (int i = 0; i < 26; i++) {
		if (data[i] > data_2[i]) {
			answer += data[i] - data_2[i];
		}
		else {
			answer += data_2[i] - data[i];
		}
	}

	cout << answer;
}
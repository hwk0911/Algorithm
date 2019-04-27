#include <iostream>
#include <string>

using namespace std;

int main() {
	string str_1[2];
	string F;
	int answer = 0;

	str_1[0] = "WBWBWBWB";
	str_1[1] = "BWBWBWBW";

	for (int i = 0; i < 8; i++) {
		cin >> F;
		for (int j = 0; j < 8; j++) {
			if (str_1[i % 2].at(j) == 'W' && F.at(j) == 'F')
				answer++;
		}
	}

	cout << answer;
}
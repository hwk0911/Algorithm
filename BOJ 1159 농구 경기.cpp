#include <iostream>
#include <string>

#define ERROR "PREDAJA"

using namespace std;

int main() {
	int N;
	string FName;
	string answer = "";
	int data[27] = { 0, };

	cin >> N;

	for (; N; N--) {
		cin >> FName;
		data[(int)(FName.at(0) - 97)]++;
	}

	for (int i = 0; i < 27; i++) {
		if (data[i] > 4)
			answer += (char)(i + 97);
	}

	if (answer.length() != 0)
		cout << answer;
	else
		cout << ERROR;
}
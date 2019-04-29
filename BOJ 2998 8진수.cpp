#include <iostream>
#include <string>

using namespace std;

int main() {
	string binary;
	string binary_2 = "";
	string answer = "";
	cin >> binary;

	for (int i = binary.length(); i % 3; i++) {
		binary_2 += "0";
	}
	binary_2 += binary;

	for (int i = 0; i < binary_2.length(); i += 3) {
		if (binary_2.substr(i, 3) == "000")
			answer += "0";
		else if (binary_2.substr(i, 3) == "001")
			answer += "1";
		else if (binary_2.substr(i, 3) == "010")
			answer += "2";
		else if (binary_2.substr(i, 3) == "011")
			answer += "3";
		else if (binary_2.substr(i, 3) == "100")
			answer += "4";
		else if (binary_2.substr(i, 3) == "101")
			answer += "5";
		else if (binary_2.substr(i, 3) == "110")
			answer += "6";
		else if (binary_2.substr(i, 3) == "111")
			answer += "7";
	}


	cout << answer;
}
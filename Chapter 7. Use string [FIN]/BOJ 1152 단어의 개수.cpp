#include <iostream>
#include <string>
using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	string a = "";
	int count = 0;
	getline(cin, a);
	for (int i = 0; i < a.length() - 1; i++)
		if (a.at(i) != ' ' && a.at(i + 1) == ' ')
			count++;
	if (a.at(a.length() - 1) == ' ')
		count--;
	count++;
	printf("%d", count);
}

/*
Input 1:
The Curious Case of Benjamin Button

Output 1:
6

Input 2:
 Mazatneunde Wae Teullyeoyo

Output 2:
3

Input 3:
Teullinika Teullyeotzi

Output 3:
2
*/
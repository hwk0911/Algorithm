#include <iostream>
#include <string>

using namespace std;

#define Dis "Distances: "

int main() {
	int T;
	string A, B;

	cin >> T;

	for (; T > 0; T--) {
		cin >> A >> B;
		cout << Dis;
		for (int i = 0; i < A.length(); i++) {
			if (A.at(i) > B.at(i))
				cout << 26 - ((int)A.at(i) - (int)B.at(i)) << " ";
			else if(A.at(i) == B.at(i))
				cout << 0 << " ";
			else
				cout << 26 - (((int)A.at(i) + 26) - (int)B.at(i)) << " ";
		}
		cout << "\n";
	}
}

//A 65
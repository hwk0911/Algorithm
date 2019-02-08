#include <iostream>
#include <string>
using namespace std;

int main() {
	string incode;
	string decode = "";

	while (1) {
		getline(cin, incode);
		if (incode != "END") {
			for (int i = incode.size() - 1; i >= 0; i--) {
				decode += incode.at(i);
			}
			cout << decode << "\n";
			decode = "";
		}
		else
			break;
	}
}

/*
Input 1:
!edoc doog a tahW
noitacitsufbo
erafraw enirambus detcirtsernu yraurbeF fo tsrif eht no nigeb ot dnetni eW
lla sees rodroM fo drol eht ,ssertrof sih nihtiw delaecnoC
END

Output 1:
What a good code!
obfustication
We intend to begin on the first of February unrestricted submarine warfare
Concealed within his fortress, the lord of Mordor sees all
*/
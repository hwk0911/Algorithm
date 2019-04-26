#include <iostream>

using namespace std;

int main() {
	int A, B, C, D, L;
	int day_1 = 0;
	int day_2 = 0;
	cin >> L >> A >> B >> C >> D;

	if (A%C != 0)
		day_1 += (A / C) + 1;
	else
		day_1 += A / C;

	if (B%D != 0)
		day_2 += (B / D) + 1;
	else
		day_2 += B / D;

	cout << (day_1 > day_2 ? L - day_1 : L - day_2);
}
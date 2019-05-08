#include <iostream>

using namespace std;

#pragma warning(disable:4996)

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int A = 0, B;

	scanf("%d", &B);
	A += B;
	scanf("%d", &B);
	A += B;
	scanf("%d", &B);
	A += B;
	scanf("%d", &B);
	A += B;

	printf("%d\n%d", A / 60, A % 60);
}
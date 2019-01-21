#include <iostream>
using namespace std;
int main() {
	char a[101];
	for (int i = 0; i < 100; i++) {
		cin.getline(a, 101, '\n');
		cout << a << "\n";
	}
}

/*
예제 입력 1 :
Hello
Baekjoon
Online Judge

예제 출력 1 :
Hello
Baekjoon
Online Judge

*/
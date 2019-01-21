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
Input 1:
    Hello

Baekjoon     
   Online Judge

Output 1:
    Hello

Baekjoon     
   Online Judge   
*/
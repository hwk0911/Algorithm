#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main() {
	int N;
	string a;
	cin >> N;

	string temp;
	int index;

	vector <string> arr[50];
	for (; N; N--) {
		cin >> a;
		arr[a.length() - 1].push_back(a);
	}
	for (int i = 0; i < 50; i++) {
		if (arr[i].size()) {
			for (int j = 0; j < arr[i].size() - 1; j++) {
				index = j;
				for (int k = j + 1; k < arr[i].size(); k++) {
					if (arr[i].at(k).compare(arr[i].at(index)) < 0)
						index = k;
				}
				temp = arr[i].at(j);
				arr[i].at(j) = arr[i].at(index);
				arr[i].at(index) = temp;
			}
		}
	}
	for (int i = 0; i < 50; i++) {
		if (arr[i].size()) {
			for (int j = 0; j < arr[i].size() - 1; j++) {
				if(arr[i].at(j) == arr[i].at(j + 1))
					arr[i].at(j) = " ";
			}
			for (int j = 0; j < arr[i].size(); j++) {
				if (arr[i].at(j) != " ")
					cout << arr[i].at(j) << "\n";
			}
		}
	}
}
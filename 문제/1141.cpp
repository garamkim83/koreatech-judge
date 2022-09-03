#include<iostream>
#include<string>
using namespace std;

bool check(string tmp, string str1, string str2) {
	for (int i = 0; i < tmp.length() && tmp.length(); i++) {

	}
}

int main() {
	int t;
	string str1[11], str2[11], ans[11];

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> str1[i];
		cin >> str2[i];
		ans[i] = "";
	}

	for (int i = 0; i < t; i++) {
		string tmp;
		for (int j = 0; j < str1[i].length() && j < str2[i].length(); j++) {
			if (str1[i][j] == str2[i][j]) {
				tmp += str1[i][j];
				if ()
			}
			else break;
		}
		if (tmp.length() > ans[i].length()) {
			if (str1[i].length() % tmp.length() == 0) {
				for (int k = 0; k < str1[i].length() / tmp.length(); k++) {

				}
			}
		}
	}

	for (int i = 0; i < t; i++) cout << ans[i] << endl;

	return 0;
}
#include<iostream>
#include<string>
using namespace std;

int findcnt(string str, string word) {
	int cnt = 0;

	for (int i = 0; i < str.length(); i += word.length()) {
		if (str.find(word) == -1) break;
		else if (str.find(word, i) <= i) cnt++;
	}

	return cnt;
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
				if (str1[i].length() % tmp.length() == 0 && str2[i].length() % tmp.length() == 0 && tmp.length() > ans[i].length()) {
					if ((str1[i].length() / tmp.length() == findcnt(str1[i], tmp)) && (str2[i].length() / tmp.length() == findcnt(str2[i], tmp)))
						ans[i] = tmp;
				}
			}
			else break;
		}
	}

	for (int i = 0; i < t; i++) cout << ans[i] << endl;

	return 0;
}
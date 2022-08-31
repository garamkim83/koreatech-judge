#include<iostream>
#include<string>
using namespace std;

int main() {
	int n;
	string str;
	int a[26] = { 0, };

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str;
		for (int j = 0; j < str.length(); j++) {
			a[str[j] - 'a']++;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (a[i] == 0) continue;
		else if (a[i] % n != 0) {
			cout << "false";
			return 0;
		}
	}

	cout << "true";

	return 0;
}
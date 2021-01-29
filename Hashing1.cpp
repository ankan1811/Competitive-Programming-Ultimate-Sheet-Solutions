#include <bits/stdc++.h>
using namespace std;
int freq[3000];
char s[1005];
int main() {
	int maxFreq = 0, n;
	char ch;
	cin.getline(s, 1000);
	n = strlen(s);
	for (int i = 0; i < n; ++i) {
		freq[s[i]]++;
		if (freq[s[i]] > maxFreq) {
			maxFreq = freq[s[i]];
			ch = s[i];
		} else if (freq[s[i]] == maxFreq && ch > s[i]) {
			ch = s[i];//lower ascii value as in the question
		}
	}
	cout << ch << " " << maxFreq;
	return 0;
}

#include<bits/stdc++.h>
using namespace std;

void solve(int i, string s, string &ans) {
	if (i == s.length()) {
		cout << ans << " ";
		return;
	}
	
	solve(i + 1, s,  ans + s[i]);
	solve(i + 1, s,  ans);
}

int main() {
	string s = "abc";
	string ans = "";
	cout<<"All possible subsequences are: "<<endl;
	solve(0, s, ans);
}

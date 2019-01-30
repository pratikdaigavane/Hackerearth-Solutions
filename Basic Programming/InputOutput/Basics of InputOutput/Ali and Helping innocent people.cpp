#include <bits/stdc++.h>
using namespace std;
const int maxn = 3e5 + 17;
string s, vowel = "AEOUIY";
int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> s;
	bool ok = 1;
	for(auto i : {0, 3, 4, 7})
		ok &= (s[i] + s[i + 1]) % 2 == 0;
	ok &= vowel.find(s[2]) == string::npos;
	cout << (ok ? "valid" : "invalid") << '\n';
}

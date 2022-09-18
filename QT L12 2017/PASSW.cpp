#include <bits/stdc++.h>
using namespace std;

int n, k, i;
string s, s1;

int Dmax(int L, int R) {
	int vt = L;
	for (int i = L+1; i<=R; i++)
		if(s[vt] < s[i]) vt = i;
	return vt;
}

bool dx(string s) {
	n = s.size();
	for (i=0; i<=n/2; i++)
		if(s[i] != s[n-i-1]) return false;
	return true;
}

int main() {
	freopen("PASSW.inp", "r", stdin);
	freopen("PASSW.out", "w", stdout);
	cin >> k;
	while (cin >> s1) s+=s1;
	n = s.size();

	int L = -1;
	string ans;

	for(int i=n-1; i>=0; i--)
		if(s[i] < '0' || s[i] > '9')
			s.erase(i, 1);
	n = s.size();

	for (i = n-k; i<n; i++) {
		L = Dmax(L + 1, i);
		if (n - L == k) {
            ans += s.substr(L, k);
            break;
        } else {
			ans += s[L];
			k--;
		}
	}
	cout << ans << endl;
	(dx(ans)) ? cout << "YES" : cout << "NO";
	return 0;
}

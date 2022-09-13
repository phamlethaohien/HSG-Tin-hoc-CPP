#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool doiXung(const string &s, int l, int r) {
    while (l < r) {
        if (s[l] != s[r]) return false;
        l++;
        r--;
    }
    return true;
}

int main() {
    freopen("TACHXAU.INP", "r", stdin);
    freopen("TACHXAU.OUT", "w", stdout);
    string s; cin >> s;
    ll n = s.size();
    s = " " + s;
    vector <ll> L(n + 1, n);
    L[0] = 0;
    for (ll i=1; i<=n; i++) {
        for (ll j=i; j>0; j--) {
            if (doiXung(s, j, i))
                L[i] = min(L[i], L[j-1] + 1);
        }
    }
    cout << L[n] << endl;
}

#include <bits/stdc++.h>
using namespace std;
typedef string str;
typedef long long ll;

set <str> d(str s) {
    set <str> res;
    for (ll i = 1; i <= s.size(); i++) {
        for (ll j = 0; j <= s.size() - i; j++)
            res.insert(s.substr(j, i));
    }
    return res;
}

int main() {
    freopen("XAU.inp", "r", stdin);
    freopen("XAU.out", "w", stdout);
    str s;
    cin >> s;
    set <str> res = d(s);
    cout << res.size();
}

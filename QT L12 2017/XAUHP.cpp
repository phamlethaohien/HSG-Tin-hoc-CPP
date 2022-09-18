#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("XAUHP.inp", "r", stdin);
    freopen("XAUHP.out", "w", stdout);
    long long j, i, n;
    string s, s1;
    cin >> n;
    vector <bool> check(11, true);
    for (j = 0; j < n; j++){
        cin >> s;
        s1 = s;
        reverse(s1.begin(), s1.end());
        for (i=1; i<s.size(); i++) {
            if (abs((int)s[i] - (int)s[i-1]) != abs((int)s1[i] - (int)s1[i-1]))
                check[j] = false;
        }
    }
    for (i = 0; i < n; i++) {
        if (check[i]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

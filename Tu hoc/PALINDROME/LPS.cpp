#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e3;

int main() {
    freopen("LPS.inp", "r", stdin);
    freopen("LPS.out", "w", stdout);
    int n, i, j, x, L, kq = 1, v[MAX+5];
    string s; cin >> s;
    n = s.size();
    s = " " + s;
    bool F[n+1][n+1];
    memset(F, false, sizeof(F));
    for (i = 1; i <= n; i++) F[i][i] = true;
    for (L = 2; L <= n; L++) {
        for (i = 1; i <= n-L+1; i++) {
            j = i+L-1;
            if ((L == 2) && (s[i] == s[j])) F[i][j] = true;
            else F[i][j] = F[i+1][j-1] && s[i] == s[j];
            if (F[i][j]) kq = max(kq, L);
        }
    }
    cout << kq;
    return 0;
}


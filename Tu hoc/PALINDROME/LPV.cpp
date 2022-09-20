#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e3;

int main() {
    freopen("LPV.inp", "r", stdin);
    freopen("LPV.out", "w", stdout);
    int n, i, j, x, s, kq = 1, v[MAX+5];
    cin >> n;
    for (i=1; i<=n; i++) cin >> v[i];
    bool F[n+1][n+1];
    memset(F, false, sizeof(F));
    for (i = 1; i <= n; i++) F[i][i] = true;
    for (s = 2; s <= n; s++) {
        for (i = 1; i <= n-s+1; i++) {
            j = i+s-1;
            if ((s == 2) && (v[i] == v[j])) F[i][j] = true;
            else F[i][j] = F[i+1][j-1] && v[i] == v[j];
            if (F[i][j]) kq = max(kq, s);
        }
    }
    cout << kq;
    return 0;
}

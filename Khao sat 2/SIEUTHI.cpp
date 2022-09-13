#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    freopen("SIEUTHI.inp", "r", stdin);
    freopen("SIEUTHI.out", "w", stdout);
    ll n, s, i, j;
    cin >> n >> s;
    ll w[n+1], v[n+1];

    for (i = 1; i <= n; i++) cin >> w[i];
    for (i = 1; i <= n; i++) cin >> v[i];

    ll L[n+1][s+1];
    memset(L, 0, sizeof(L));

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= s; j++) {
            L[i][j] = L[i-1][j];
            if (j >= w[i]) L[i][j] = max(L[i-1][j], L[i-1][j-w[i]] + v[i]);
        }
    }
    cout << L[n][s];
}

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    freopen("VALI.inp", "r", stdin);
    freopen("VALI.out", "w", stdout);
    ll n, s;
    cin >> n >> s;
    ll w[100], v[100];

    for (ll i=1; i<=n; i++) cin >> w[i] >> v[i];

    ll L[n+1][s+1];
    memset(L, 0, sizeof(L));

    for (ll i=1; i<=n; i++) {
        for (ll j=1; j<=s; j++) {
            L[i][j] = L[i-1][j];
            if (j>=w[i]) L[i][j] = max(L[i-1][j], L[i-1][j-w[i]] + v[i]);
        }
    }
    for (ll i=1; i<=n; i++) {
        for (ll j=1; j<=s; j++)
            cout << L[i][j] << " ";
        cout << endl;
    }

    cout << L[n][s];
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    freopen("THUHOACH.inp", "r", stdin);
    freopen("THUHOACH.out", "w", stdout);
    ll n, c, i, j, w[21];
    vector <bool> f(1000010, false);
    cin>> n >> c;
    f[0] = true;
    for (i = 1; i<=n; i++) cin >> w[i];
    sort(w+1, w+n+1);
    for (i = 1; i<=n; i++) {
        for (j = c-w[i]; j>=0; j--)
            if (f[j]) f[j + w[i]] = true;
    }
    while (!f[c]) c--;
    cout << c;
	return 0;
}

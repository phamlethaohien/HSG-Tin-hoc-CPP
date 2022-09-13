#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    freopen("DAY_MAX.inp", "r", stdin);
    freopen("DAY_MAX.out", "w", stdout);
    ll n, i, j;
    cin >> n;
    vector <ll> v(n), L(n, 1), h(n);
    for (i=0; i<n; i++) cin >> v[i];
    for (i=0; i<n; i++) h[i] = i;

    for (i = 1; i < n; i++) {
        for (j = 0; j < i; j++) {
            if (v[i] > v[j] && L[i] < L[j] + 1) {
                L[i] = L[j] + 1;
                h[i] = j;
            }
        }
    }

    ll maxX = 1, s = 0;
    for (i = 0; i < n; i++) {
        if (L[i] > maxX) {
            maxX = L[i];
            s = i;
        }
    }
    vector <ll> lis;
    while (true) {
        lis.push_back(v[s]);
        if (h[s] == s) break;
        s = h[s];
    }
    sort(lis.begin(), lis.end());
    for (i = 0; i < maxX; i++) cout << lis[i] << " ";
}

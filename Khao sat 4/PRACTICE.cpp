#include <bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
typedef long long ll;

int main() {
    freopen("PRACTICE.inp", "r", stdin);
    freopen("PRACTICE.out", "w", stdout);
    ll n, c, i, x, y, ans;
    cin >> n >> c;
    vector < pair <ll, ll> > v;
    for (i=0; i<n; i++) {
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(), v.end());

    ans = 0;
    for (i=0; i<n; i++) {
        if (c >= v[i].ff) {
            c += v[i].ss;
            ans++;
        }
    }
    cout << ans;
}

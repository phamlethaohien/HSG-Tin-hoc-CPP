#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    freopen("CHONQT.INP", "r", stdin);
    freopen("CHONQT.OUT", "w", stdout);
    ll n, i, x;
    cin >> n;
    vector <ll> a;
    for (i=0; i<n; i++) {
        cin >> x; a.push_back(x);
    }
    sort(a.begin(), a.end());
    ll res=0, cnt=1;
    for (i=1; i<n+1; i++) {
        if (a[i] != a[i-1]) {
            res += cnt*(cnt-1)/2;
            cnt = 1;
        }
        else cnt += 1;
    }
    cout << res;
}

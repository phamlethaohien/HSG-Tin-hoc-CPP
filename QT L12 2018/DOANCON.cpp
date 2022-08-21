#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("DOANCON.inp", "r", stdin);
    freopen("DOANCON.out", "w", stdout);
    long long n, i, j, t, x;
    vector <long long> a(1000), d(1000, 1);
    cin >> t;
    while(t--) {
        cin >> n;
        for (i=0; i<n; i++) {
            cin >> a[i];
            (a[i] >= 0) ? (a[i] = 1) : (a[i] = -1);
        }
        for (i=n-2; i>0; i--) {
            if (a[i] * a[i+1] < 0)
                d[i] += d[i+1];
        }
        for (i=0; i<n; i++) {
            cout << d[i] << " ";
            d[i]=1;
        }
        cout << endl;
    }
    return 0;
}

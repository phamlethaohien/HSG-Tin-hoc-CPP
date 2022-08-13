#include <bits/stdc++.h>
using namespace std;

bool giam(int &a, int &b) {
    return (a>b);
}

int main() {
    freopen("DUANGUA.inp", "r", stdin);
    freopen("DUANGUA.out", "w", stdout);
    int k, n, a[1001];
    cin >> k >> n;
    for (int i=0; i<n; i++)
        cin >> a[i];
    sort(a, a+n, giam);

    long long kq = (a[0]*a[1]) + (a[2]*a[3]);
    cout << kq;
}

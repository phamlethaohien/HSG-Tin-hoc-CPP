#include <bits/stdc++.h>
using namespace std;

bool giam(int &a, int &b) {
    return (a>b);
}

int main() {
    freopen("NHATNHI.inp", "r", stdin);
    freopen("NHATNHI.out", "w", stdout);
    int n, a[10000];
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> a[i];
    sort(a, a+n, giam);
    cout << a[0] <<endl;
    cout << a[1] <<endl;
}

#include <bits/stdc++.h>
using namespace std;

int n;
long long m, h[100000];

bool kt(int x) {
    long long s=0;
    for (int i=1; i <= n; i++) {
        if (h[i] > x)
            s += h[i] - x;
    }
    if (s >= m) return true;
    return false;
}

int main() {
    freopen("laygo.inp", "r", stdin);
    freopen("laygo.out", "w", stdout);
    cin >> n;
    cin >> m;
    for (int i=0; i<n; i++)
        cin >> h[i];

    int l=0, r=1000000000, mid;
    while (l<r) {
        mid = (l+r+1)/2;
        if (kt(mid)) l = mid;
        else r = mid -1;
    }
    cout << l;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

bool giam(int &a, int &b) {
    return (a>b);
}

int main() {
    freopen("QUATANG.inp", "r", stdin);
    freopen("QUATANG.out", "w", stdout);
    int x, n, a[1000];
    cin >> n >> x;
    for (int i=0; i<n; i++)
        cin >> a[i];
    sort(a, a+n, giam);

    int maxX = 0, j=0;
    for (int i=0; i<n-2; i++) {
        for (j=i+1; j<n-1; j++) {
            if (a[i] + a[j] <= x)
                if (maxX < a[i] + a[j])
                    maxX = a[i] + a[j];
                else break;
            }
    }
    cout << maxX;
}

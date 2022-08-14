#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("CHONDUA.inp", "r", stdin);
    freopen("CHONDUA.out", "w", stdout);
    int n;
    cin >> n;
    int a[1000], b[1000];
    for (int i=0; i<n; i++)
        cin >> a[i];
    sort(a, a+n);

    for (int j=0; j<n; j++)
        cin >> b[j];
    sort(b, b+n);

    int d = 0, j=0;

    for (int i=0; i < n-1; i++) {
        while ((a[i] == b[j]) && (j<n)) {
            d = d + (n-j);
            j++;
        }
    }
    cout << d;

}

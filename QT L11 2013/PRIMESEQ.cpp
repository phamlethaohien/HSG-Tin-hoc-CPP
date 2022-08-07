#include <bits/stdc++.h>
using namespace std;

bool nguyenTo(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    freopen("PRIMESEQ.inp","r",stdin);
    freopen("PRIMESEQ.out","w",stdout);
    int a[100000], n;
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> a[i];

    int b[100000], c[100000], t = 0;
    for (int i=0; i<n; i++)
        c[i] = a[i];

    for (int i=0; i<n; i++) {
        if ( !nguyenTo(a[i]) ) {
            while( !nguyenTo(a[i]) )
                a[i]++;
            b[i] = a[i];
        }
        else b[i] = a[i];
    }
    for (int i=0; i<n; i++)
        t = t + (b[i] - c[i]);
    cout << t;
}

#include<bits/stdc++.h>
using namespace std;

int dx(int n) {
    int x, m=0;
    while (n!=0) {
        x =  n%10;
        n /= 10;
        m = m*10+x;
    }
    return m;
}

int main() {
    freopen("PRINTPALI.inp", "r", stdin);
    freopen("PRINTPALI.out", "w", stdout);
    int n, i, a[1001];
    cin >> n;
    for (i=0; i<n; i++) cin >> a[i];
    for (i=0; i<n; i++) {
        if (dx(a[i]) == a[i]) cout << a[i] << " ";
    }

}

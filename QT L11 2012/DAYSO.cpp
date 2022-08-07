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
    freopen("DAYSO.inp", "r", stdin);
    freopen("DAYSO.out", "w", stdout);
    int n, a[100];
    int m = 0;
    cin >> n;
    for (int i = n; i >= 1; i--) {
        if((nguyenTo(i)) || (n % i == 0)) {
            a[m++] = i;
            cout << i << " ";
        }
    }
    return 0;
}

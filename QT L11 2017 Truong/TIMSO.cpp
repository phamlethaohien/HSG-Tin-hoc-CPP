#include <bits/stdc++.h>
using namespace std;

bool nguyenTo(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int doiXung(int n) {
    int x, m = 0;
    while (n != 0) {
        x = n%10;
        n/=10;
        m=m*10+x;
    }
    return m;
}

int main() {
    freopen("TIMSO.inp", "r", stdin);
    freopen("TIMSO.out", "w", stdout);
    int a, b, dem = 0;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (nguyenTo(doiXung(i)))
            dem++;
    }
    cout << dem <<endl;

    for (int i = a; i <= b; i++) {
        if (nguyenTo(doiXung(i)))
            cout << i << " ";
    }
}

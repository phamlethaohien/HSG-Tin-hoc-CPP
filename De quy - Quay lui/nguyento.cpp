#include <bits/stdc++.h>
using namespace std;

int ucln(int a, int b) {
    if (b == 0) return a;
    if (a%b == 0) return b;
    return ucln(b, a%b);
}

int main() {
    freopen("nguyento.inp", "r", stdin);
    freopen("nguyento.out", "w", stdout);
    int a, b, dem=0;
    while (cin >> a >> b) {
        if (ucln(a, b) == 1) {
            dem++;
        }
    }
    cout << dem;
    return 0;
}

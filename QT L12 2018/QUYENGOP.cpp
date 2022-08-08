#include <bits/stdc++.h>
using namespace std;

bool chinhPhuong(int a) {
    if (a < 1) return false;
    int i = 1;
    while(i*i <= a) {
        if (i*i == a) return true;
        i++;
    }
    return false;
}

int main() {
    freopen("QUYENGOP.inp", "r", stdin);
    freopen("QUYENGOP.out", "w", stdout);
    int n, t = 0;
    cin >> n;
    for (int i = 1; i <=n; i++) {
        if (!chinhPhuong(i))
            t += i;
    }
    cout << t;
}

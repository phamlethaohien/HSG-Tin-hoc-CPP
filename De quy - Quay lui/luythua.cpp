#include <bits/stdc++.h>
using namespace std;

long long lt(int a, int b) {
    if (b == 0) return 1;
    return a*lt(a, b-1);
}

int main() {
    freopen("luythua.inp", "r", stdin);
    freopen("luythua.out", "w", stdout);
    int a, b;
    cin >> a >> b;
    cout << lt(a, b);
    return 0;
}

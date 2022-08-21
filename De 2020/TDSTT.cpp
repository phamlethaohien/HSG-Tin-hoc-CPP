#include <bits/stdc++.h>
using namespace std;

int ucln(int a, int b) {
    if (b == 0) return a;
    if (a%b == 0) return b;
    return ucln(b, a%b);
}

int main() {
    freopen("TDSTT.inp", "r", stdin);
    freopen("TDSTT.out", "w", stdout);
    int n, i, j;
    cin >> n;
    vector <int> v(100001), L(100001, 1);
    for (i=0; i<n; i++) cin >> v[i];

    for (i=1; i<n; i++) {
        for (j=0; j<i; j++) {
            if ((v[i] > v[j]) && (L[i] < L[j] + 1) && (ucln(v[i], v[j]) > 1)) {
                L[i] = L[j] + 1;
            }
        }
    }
    cout << *max_element(L.begin(), L.end());
}

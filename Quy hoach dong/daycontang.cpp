#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("daycontang.inp", "r", stdin);
    freopen("daycontang.out", "w", stdout);
    int n, i, j;
    cin >> n;
    vector <int> v(n), L(n, 1), h(n);
    for (int i=0; i<n; i++) cin >> v[i];
    for (i = 0; i < n; i++) h[i] = i;

    for (int i=1; i<n; i++) {
        for (int j = 0; j < i; j++) {
            if (v[i] > v[j] && L[i] < L[j] + 1) {
                L[i] = L[j] + 1;
                h[i] = j;
            }
        }
    }

    int max = 1, s = 0;
    for (int i = 0; i < n; i++) {
        if (L[i] > max) {
            max = L[i];
            s = i;
        }
    }
    cout << max << endl;
    vector <int> lis;
    while (true) {
        lis.push_back(v[s]);
        if (h[s] == s) break;
        s = h[s];
    }
    sort(lis.begin(), lis.end());
    for (int i = 0; i < max; i++) {
        cout << lis[i] << " ";
    }
}

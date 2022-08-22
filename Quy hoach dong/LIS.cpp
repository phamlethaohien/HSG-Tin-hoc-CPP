#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("daycontang.inp", "r", stdin);
    freopen("daycontang.out", "w", stdout);
    int n, x, dem=0;
    vector <int> L(100, 1);
    cin >> n;
    vector <int> a;
    for (int i=0; i<n; i++) {
        cin >> x; a.push_back(x);
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<i; j++) {
            if (a[i] > a[j]) {
                L[i] =  max(L[i], L[j]+1);
            }
        }
    }
    cout << *max_element(L.begin(), L.end()) << endl;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("SEQ.inp", "r", stdin);
    freopen("SEQ.out", "w", stdout);
    long long n, i, j;
    vector <long long> L(100001, 1), a(100001);
    cin >> n;
    for (i=0; i<n; i++) cin >> a[i];

    for (i=0; i<n; i++) {
        for (j=0; j<i; j++) {
            if ((a[i] > a[j]) && (a[i] % a[j] == 0))
                L[i] =  max(L[i], L[j]+1);
        }
    }
    cout << *max_element(L.begin(), L.end()) << endl;
}

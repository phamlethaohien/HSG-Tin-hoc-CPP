#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("CHONDUA.inp", "r", stdin);
    freopen("CHONDUA.out", "w", stdout);
    vector <long long> a, b;
    long long n, x, y, t, i, j;
    cin >> n;
    t = n*n;
    for (i=0; i<n; i++) {
        cin >> x; a.push_back(x);
    }
    sort(a.begin(), a.end());

    for (j=0; j<n; j++) {
        cin >> y; b.push_back(y);
    }
    sort(b.begin(), b.end());

    vector <long long>::iterator up, low;
    for (i=0; i<n; i++){
        low = lower_bound(b.begin(), b.end(), a.at(i));
        up = upper_bound(b.begin(), b.end(), a.at(i));
        t -= (up-low);
    }
    cout << t;
}

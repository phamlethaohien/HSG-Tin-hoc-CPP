#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("CSC.inp", "r", stdin);
    freopen("CSC.out", "w", stdout);

    bool csc = true;
    int n, i, a[100];
    cin >> n;
    for (i = 0; i < n; i++) cin >> a[i];

    int d = a[1] - a[0];
    if (n <= 2) csc = true;
    else
        for (i = 2; i < n; i++) {
            if (a[i] - a[i-1] != d) {
                csc = false;
                break;
            }
        }

        (csc) ? cout << "1" : cout << "0";
}

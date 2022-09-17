#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("CSN.inp", "r", stdin);
    freopen("CSN.out", "w", stdout);

    bool csn = true;
    int n, i, a[100];
    cin >> n;
    for (i = 0; i < n; i++) cin >> a[i];

    float d = a[1] / a[0];
    if (n <= 2) csn = true;
    else
        for (i = 2; i < n; i++) {
            if (a[i] / a[i-1] != d) {
                csn = false;
                break;
            }
        }

        (csn) ? cout << "1" : cout << "0";
}

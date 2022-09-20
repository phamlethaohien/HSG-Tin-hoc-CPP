#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("SUBSET.inp", "r", stdin);
    freopen("SUBSET.out", "w", stdout);
    long long n, s, i, j;
    cin >> n >> s;
    vector <long long> a(n);
    for (i = 0; i < n; i++) cin >> a[i];
    vector <bool> dp(s+1, false);
    dp[0] = true;
    for (i = 0; i < n; i++) {
        for (j = s; j >= a[i]; j--) {
            if (dp[j-a[i]]) dp[j] = true;
        }
    }
    for (i = s; i>=0; i--) {
        if(dp[i]) {
            cout << i;
            return 0;
        }
    }
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("DIVSEQ.inp", "r", stdin);
    freopen("DIVSEQ.out", "w", stdout);
    long long x, d, n, i, T, f[100000], ans, cnt;
    cin >> T;
    while (T--) {
        cin >> d >> n;
        f[0] = 0;
        for(i=1; i<=n; i++) {
            cin >> x;
            f[i] = (f[i-1] + x) % d;
        }
        ans = 0; cnt = 1;
        sort(f, f+n+1);
        f[n+1] = f[n] + 1;
        for (i=0; i<=n+1; i++) {
            if(f[i] != f[i+1]) {
                ans += cnt*(cnt-1)/2;
                cnt = 1;
            }
            else cnt++;
        }
        cout << ans << endl;
    }
    return 0;
}

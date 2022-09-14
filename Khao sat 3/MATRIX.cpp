#include <bits/stdc++.h>
using namespace std;

const int MAX = 505;

long long a[MAX][MAX], ans = -1e9 + 7, x;
int m, n;

int main() {
    freopen("MATRIX.inp", "r", stdin);
    freopen("MATRIX.out", "w", stdout);
    cin >> m >> n;
    memset(a, 0, sizeof a);
    for (int i=1; i<=m; i++) {
        for (int j=1; j<=n; j++) {
            cin >> x;
            a[i][j] = a[i-1][j] + a[i][j-1] + x - a[i-1][j-1];
            ans = max(ans, x);
        }
    }

    for (int i=1; i<=m; i++) {
        for (int j=1; j<=n; j++) {
            for (int k=1; k <= min(i,j); k++) {
                x = a[i][j] - a[i-k][j] - a[i][j-k] + a[i-k][j-k];
                ans = max(ans, x);
            }
        }
    }

    cout << ans << endl;
}

#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e6;

int main() {
    freopen("SONGUYENTO.inp", "r", stdin);
    freopen("SONGUYENTO.out", "w", stdout);
    vector <bool> mark(MAX+1, true);
    vector <int> d(MAX+1, 0);
    mark[0] = mark[1] = false;
    int t, n, i, j;
    cin >> t;
    while (t--) {
        cin >> n;
        for (i=2; i<=MAX+1; i++) {
            if (mark[i]) {
                for (j=i*2; j<=MAX+1; j+=i)
                    mark[j] = false;
            }
        }

        if (mark[n]) cout << 1 << endl;
        else cout << 0 << endl;
    }
}

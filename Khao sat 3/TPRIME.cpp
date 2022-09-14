#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MAX = 1e6;

int main() {
    freopen("TPRIME.inp", "r", stdin);
    freopen("TPRIME.out", "w", stdout);
    vector <bool> mark(MAX+1, true);
    mark[0] = mark[1] = false;
    ll i, j, a, b, x, t, kq;
    cin >> t;
    while (t--) {
        cin >> a >> b >> x;
        for (i=2; i<=b; i++) {
            if (mark[i]) {
                for (j=i*2; j<=b; j+=i)
                    mark[j] = false;
            }
        }

        kq=0;
        for(i=a; i<=b; i++)
            if (mark[i] && i>x) kq+=i;

        cout << kq << endl;
    }
}

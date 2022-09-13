#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cPh(int a) {
    int sqr = sqrt(a);
    return (sqr*sqr == a);
}

int main() {
    freopen("SOTHANTHIEN.inp", "r", stdin);
    freopen("SOTHANTHIEN.out", "w", stdout);
    vector <bool> mark(100001, true);
    vector <ll> d(100005, 0);
    mark[0] = mark[1] = false;
    ll n, i, j, a, b, t;
    cin >> a >> b;
    for (i=2; i<=b; i++) {
        if (mark[i]) {
            for (j=i*2; j<=b; j+=i)
                mark[j] = false;
        }
    }
    t=0;
    for(int i=a;i<=b;i++) {
        if (!mark[i] && !cPh(i))
            t++;
    }
    cout << t << endl;
}

#include<bits/stdc++.h>
using namespace std;

const int MAX = 3e6;

int main() {
    freopen("CLAN.inp", "r", stdin);
    freopen("CLAN.out", "w", stdout);
    long long n, i, kq = 0, x;
    cin >> n;
    vector <long long> cnt(MAX+5);
    for (i=1; i<=n; i++) {
        cin >> x;
        cnt[x]++;
    }
    for (i=1; i<=n; i++) {
        if (cnt[i] > 0) kq += cnt[i]/i;
    }
    cout << kq << endl;
}

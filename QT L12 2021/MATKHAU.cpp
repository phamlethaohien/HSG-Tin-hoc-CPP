#include <bits/stdc++.h>
using namespace std;

bool U(string a, string s) {
    string a1;
    while (a1.size() < s.size()) a1+=a;
    return (a1==s);
}

int main() {
    freopen("MATKHAU.inp", "r", stdin);
    freopen("MATKHAU.out", "w", stdout);
    string s, s1, sm;
    cin >> s;
    int i, k;
    vector <int> d(255, 0);
    int n = s.size();
    for (i=1; i<=n; i++) {
        if (n%i==0) {
            k = n/i;
            s1 = s.substr(0, k);
            if (U(s1, s)) sm = s1;
        }
    }
    for (i=0; i<sm.size(); i++) {
        d[int(sm[i])-97]++;
    }
    sort(d.begin(), d.end(), greater<int>());
    cout << d[0];
}

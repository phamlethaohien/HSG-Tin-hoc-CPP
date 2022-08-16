#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("GHEPSOI.inp", "r", stdin);
    freopen("GHEPSOI.out", "w", stdout);
    vector <int> a;
    int n, x, i, tt, t=0;
    cin >> n;
    for(i=0; i<n; i++) {
        cin >> x; a.push_back(x);
    }
    sort(a.begin(), a.end());

    tt = a[0] + a[1];
    a.erase(a.begin());
    a.erase(a.begin());
    t = tt;
    vector <int>::iterator up;
    while(a.empty() != 1){
        up = upper_bound(a.begin(), a.end(), tt);
        a.insert(up, tt);
        tt = a[0] + a[1];
        a.erase(a.begin());
        a.erase(a.begin());
        t += tt;
    }
    cout << t <<endl;
}

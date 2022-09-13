#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("HOHANG.inp", "r", stdin);
    freopen("HOHANG.out", "w", stdout);
    int k, n;
    vector <int> d;
    string s1, s2;
    while (cin >> k) {
        while (cin >> n) {
            cin >> s1 >> s2;
            sort(s1.begin(), s1.end());
            sort(s2.begin(), s2.end());
            (s1 == s2) ? d.push_back(1) : d.push_back(0);
        }
    }
    for (int i=0; i<d.size(); i++)
        cout << d[i] << endl;

    return 0;
}

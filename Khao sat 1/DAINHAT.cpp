#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("DAINHAT.INP", "r", stdin);
    freopen("DAINHAT.OUT", "w", stdout);
    int n, m(0), d(0);
    string s;
    cin >> n;
    cin.ignore();
    while (n--) {
        getline(cin, s);
        stringstream ss(s);
        while (ss >> s) {
            int x = s.size();
            if (m < x) m=x, d=1;
            else if (m == x) d++;
        }
    }
    cout << m << endl;
    cout << d;
}


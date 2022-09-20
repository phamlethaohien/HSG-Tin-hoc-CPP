#include <bits/stdc++.h>
using namespace std;

const int MAX=100000;

bool g(pair <int, int> a, pair <int, int> b) {
     return (a.second < b.second);
}

int main() {
    freopen("hop.inp", "r", stdin);
    freopen("hop.out", "w", stdout);
    int n, x, y;
    vector <int> L(MAX+1, 1);
    vector < pair <int,int> > a;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> x >> y;
        a.push_back(make_pair(x, y));
    }
    sort(a.begin(), a.end(), g);

    for (int i=0; i<n; i++) {
        for (int j=0; j<i; j++)
            if (a[i].first >= a[j].second)
                L[i] = max(L[i], L[j]+1);
    }
    cout << *max_element(L.begin(), L.end());
}



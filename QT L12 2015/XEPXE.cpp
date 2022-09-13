#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("XEPXE.inp", "r", stdin);
    freopen("XEPXE.out", "w", stdout);
    long long n, i, x, kq, d1, d2, d3;
    cin >> n;
    vector <long long> s;
    vector <long long> a(n+5, 0);
    for (i=0; i<n; i++) {
        cin >> x; s.push_back(x);
    }
    for (i=0; i<n; i++) a[s[i]]++;

    kq = a[4]; d1 = d2 = d3 = 0;
    if (a[2]%2==0) kq+=a[2]/2;
    else {
        kq += a[2]/2;
        d2 = 1;
    }
    if (a[1] >= a[3]) {
        kq += a[3];
        d1 = a[1]-a[3];
        if (d1 >= 4) {
            kq += d1/4;
            d1 %= 4;
        }
    }
    if (a[1] < a[3]) {
        kq += a[1];
        d3 = a[3]-a[1];
        if (d3 > 0) {
            kq += (d3+d2);
            cout << kq;
            return 0;
        }
    }
    if ((d2==0 && d1!=0) || (d2!=0 && d1==0)) kq++;
    if (d2!=0 && d1!=0) {
        if (d1==1 || d1==3) kq += ((d1+2)/4) +1;
        if (d1==2) kq++;
    }
    cout << kq;
}

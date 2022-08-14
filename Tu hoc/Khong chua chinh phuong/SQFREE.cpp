#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("SQFREE.inp", "r", stdin);
    freopen("SQFREE.out", "w", stdout);
    long long n, kq;
    while (cin >> n) {
        kq = 1;
        for (long long i=2; i<=sqrt(n); i++){
            if (n%i == 0) kq *= i;
            while (n%i == 0) n /= i;
        }
        if (n>1) kq *= n;
        cout << kq << endl;
    }
}

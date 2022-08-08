#include <bits/stdc++.h>
using namespace std;

bool nguyenTo(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int doiXung(int n) {
    int x, m = 0;
    while (n != 0) {
        x = n % 10;
        n = n / 10;
        m = m * 10 + x;
    }
    return m;
}

int nhiPhan(int n) {
    int x, m = 0, lt = 1;
    while (n != 0) {
        x = n % 2;
        n = n / 2;
        m = x * lt + m;
        lt = lt * 10;
    }
    return m;
}

int main() {
    freopen("TIMMA.out","w",stdout);
    for (int i = 101; i <= 999; i++) {
        if (nguyenTo(i) && (doiXung(i) == i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    for (int i = 101; i <= 999; i++) {
        if (nguyenTo(i) && (doiXung(i) == i) && doiXung(nhiPhan(i)) == nhiPhan(i)) {
            cout << i << " " <<endl;
            cout << nhiPhan(i);
        }
    }
}

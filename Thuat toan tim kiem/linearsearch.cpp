#include <bits/stdc++.h>
using namespace std;

int linearSearch(int a[], int n, int x) {
    for (int i=0; i<n; i++) {
        if (a[i] == x) return i;
    }
    return -1;
}

int main() {
    int n, a[100], x;
    cin >> n;
    cin >> x;
    for (int i=0; i<n; i++)
        cin >> a[i];

    int kq = linearSearch(a, n, x);
    if (kq != -1)
        cout << kq;
}

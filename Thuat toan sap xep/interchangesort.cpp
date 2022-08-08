#include <bits/stdc++.h>
using namespace std;

void interchangeSort(int a[], int n) {
    int i, j;
    for (i=0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (a[i] > a[j])
                swap(a[j], a[i]);
        }
    }
}

int main() {
    int n, a[100];
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> a[i];

    interchangeSort(a, n);

    for (int i=0; i<n; i++)
        cout << a[i] << " ";

    return 0;
}

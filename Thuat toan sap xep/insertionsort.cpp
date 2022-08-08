#include <bits/stdc++.h>
using namespace std;

void insertionSort(int a[], int n) {
    int i, j, x;
    for (i=1; i<n; i++) {
        x = a[i];
        j = i-1;
        while (j >= 0 && a[j] > x) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = x;
    }
}

int main() {
    int n, a[100];
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> a[i];

    insertionSort(a, n);

    for (int i=0; i<n; i++)
        cout << a[i] << " ";

    return 0;
}

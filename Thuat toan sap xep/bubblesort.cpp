#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int a[], int n) {
    int i, j;
    for (i=0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (a[j] > a[j+1])
                swap(a[j], a[j+1]);
        }
    }
}

int main() {
    int n, a[100];
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> a[i];

    bubbleSort(a, n);

    for (int i=0; i<n; i++)
        cout << a[i] << " ";

    return 0;
}

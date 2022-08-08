#include <bits/stdc++.h>
using namespace std;

void selectionSort(int a[], int n) {
    int i, j, min;
    for (i=0; i < n-1; i++) {
        min = i;
        for (j = i+1; j < n; j++) {
            if (a[j] < a[min])
                min = j;
        }
        if (min != i)
            swap(a[min], a[i]);
    }
}

int main() {
    int n, a[100];
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> a[i];

    selectionSort(a, n);

    for (int i=0; i<n; i++)
        cout << a[i] << " ";

    return 0;
}

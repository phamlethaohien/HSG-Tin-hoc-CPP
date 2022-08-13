#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("QUATANG_1.inp", "r", stdin);
    freopen("QUATANG_1.out", "w", stdout);
    long long pivot, x, a[100000];
    int n;
    cin >> n >> x;
    for (int i=0; i<n; i++)
        cin >> a[i];
    sort(a, a+n+1);

    while (a[n] >= x)
        n--;
    pivot = lower_bound(a, a+n, x-a[n]) - a;
    while (n!=0){
        while ((a[n] + a[pivot] > x) && (pivot != 0) || (n == pivot)){
            pivot--;
            if ((a[n] + a[pivot] <= x) && (n > pivot) && (pivot != 0)) break;
        }
        if ((a[n] + a[pivot] <= x) && (n > pivot) && (pivot != 0)) break;
        if (pivot == 0){
            n--;
            pivot = lower_bound(a, a+n, x-a[n]) - a;
        }
    }
    cout << a[n] + a[pivot];
}

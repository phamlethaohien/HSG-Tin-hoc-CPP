#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("SODEP.inp", "r", stdin);
    freopen("SODEP.out", "w", stdout);
    long long n, m, i, j, d=0, k=0;
    vector <long long> a(21);
    vector <bool> kt(1000001, true);
    cin >> n >> m;
    for (i=1; i<=n; i++)
        cin >> a[i];
    for (i=1; i<=n-1; i++) {
        for (j=i+1; j<=n; j++) {
            if (a[i] == a[j]) a[j] = 0;
        }
    }
    while (n!=0){
        k++;
        j = a[k];
        while ((j<=m) && (j!=0)){
            if ((j<=1000001) && (kt[j])){
                d++;
                kt[j] = false;
            }
            if ((j>1000001) && (j<=m)) d++;
            j += a[k];
        }
        n--;
    }
    cout << d;
}

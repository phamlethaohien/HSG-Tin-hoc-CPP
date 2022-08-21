#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, i, j;
    cin >> n;
    vector <bool> nTo (n+1, true);
    for (i=2; i<=n; i++) nTo[i] = true;

    for (i=2; i*i<=n; i++) {
        if (nTo[i]) {
            for (j=i*i; j<=n; j+=i) nTo[j] = false;
        }
    }
    for (i=2; i<=n; i++) {
        if (nTo[i]) {
            cout << i << " ";
        }
    }
}

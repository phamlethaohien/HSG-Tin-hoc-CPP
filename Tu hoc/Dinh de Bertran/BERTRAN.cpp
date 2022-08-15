#include<bits/stdc++.h>
using namespace std;

const int maxN=10000000;
int n;
bool prime[maxN];
void nguyenTo() {
    memset(prime, true, sizeof(prime));
    for (int i=2; i*i < maxN; i++) {
        if (prime[i]) {
            for (int j=2; j*j < maxN; j++)
                prime[i*j] = false;
        }
    }
    return;
}

int main(){
    freopen("BERTRAN.inp", "r", stdin);
    freopen("BERTRAN.out", "w", stdout);
    nguyenTo();
    while (cin >> n) {
        int kq = 0;
        for (int i=n+1; i<2*n; i++)
            kq += (int)prime[i];
        cout << kq <<endl;
    }
    return 0;
}

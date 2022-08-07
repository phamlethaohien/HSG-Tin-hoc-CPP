#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("SUM.inp", "r", stdin);
    freopen("SUM.out", "w", stdout);
    int N, K, B, a[100];
    cin >> N;
    cin >> K;
    cin >> B;
    for (int i=0; i < N; i++)
        cin >> a[i];

    B = (B-1) % N;
    int tong = 0;
    for (int i=0; i < K; i++) {
        tong += a[B];
        B++;
        if (B == N)
            B = 0;
    }
    cout << tong;
}

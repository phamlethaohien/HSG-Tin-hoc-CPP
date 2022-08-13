#include <bits/stdc++.h>
using namespace std;

void sapxep(int i,int n, int a[]){
    for (int i=0; i<n-1; i++){
        for (int j=i+1; j<n; j++){
            if(a[i] >= a[j]) {
                int tmp = a[j];
                a[j] = a[i];
                a[i] = tmp;
            }
        }
    }
}

int main(){
    freopen("GHEPSOI_2.inp", "r", stdin);
    freopen("GHEPSOI_2.out", "w", stdout);
    int a[100001], n;
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> a[i];
    sort(a, a+n);

    int sum = 0, vt;
    for (int i=0;i<n-1;i++){
        sum += a[i] + a[i+1];
        a[i+1] = a[i] + a[i+1];
        sapxep(i+1,n,a);
    }
    cout<<sum;
}

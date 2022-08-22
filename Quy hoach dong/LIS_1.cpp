#include <bits/stdc++.h>
using namespace std;

int LIS(int arr[], int n) {
    vector <int> temp;
    temp.push_back(arr[0]);
    for (int i=1; i<n; i++){
        if (arr[i] > temp.back()) {
            temp.push_back(arr[i]);
        } else {
            int low = lower_bound(temp.begin(), temp.end(), arr[i]) - temp.begin();
            temp[low] = arr[i];
        }
    }
    return temp.size();
}

int main() {
    freopen("LIS.inp", "r", stdin);
    freopen("LIS.out", "w", stdout);
    int n, x; cin >> n;
    int arr[1000];
    for (int i=0; i<n; i++)
        cin >> arr[i];
    int kq = LIS(arr, n);
    cout << kq << endl;
    return 0;
}

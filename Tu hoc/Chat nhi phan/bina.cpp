#include <bits/stdc++.h>
using namespace std;

/* n, k
1) Tim vi tri cua phan tu = k
2) Tim vi tri cua phan tu lon nhat <= k
3) Tim vi tri cua phan tu nho nhat > k
*/

const int MAX = 1000;
int n, i, k, a[MAX], f, f1, f2;

int bsearch (int k, int left, int right) {
    int mid;
    while (left <= right) {
        mid = (left + right) / 2;
        if (a[mid] == k) return mid;
        else if (a[mid] < k) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int bsearch1 (int k, int left, int right) {
    int ans = -1, mid;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (a[mid] <= k) {
            ans = mid;
            left = mid + 1;
        } else right = mid - 1;
    }
    return ans;
}

int bsearch2 (int k, int left, int right) {
    int ans = -1, mid;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (a[mid] > k) {
            ans = mid;
            right = mid - 1;
        } else left = mid + 1;
    }
    return ans;
}

int main() {
    cin >> n >> k;
    for (i = 1; i <= n; i++) cin >> a[i];
    f = bsearch(k, 1, n);
    cout << f << endl;
    f1 = bsearch1(k, 1, n);
    cout << f1 << endl;
    f2 = bsearch2(k, 1, n);
    cout << f2 << endl;
}

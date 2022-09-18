#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("TRAMBOM.inp", "r", stdin);
    freopen("TRAMBOM.out", "w", stdout);
	long long k, x, n, i;
	vector <long long> v,d;
	cin >> n >> k;
	for (i = 0; i < n; i++){
		cin >> x; v.push_back(x);
    }
    sort(v.begin(), v.end());

    if (n == k) {
        cout << v[n-1] - v[0];
        return 0;
    }
    for (i = 0; i <= n - k; i++){
    	d.push_back(abs(v[i] - v[i + k - 1]));
	}
	cout << *min_element(d.begin(), d.end());
}

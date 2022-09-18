#include <bits/stdc++.h>
using namespace std;

long long dess(long long &a, long long &b){
	return a > b;
}

int main(){
	freopen("DUANGUA.inp", "r", stdin);
	freopen("DUANGUA.out", "w", stdout);
	long long a[100000], n, k, i, t = 0;
	vector <long long> v(n);
	cin >> k >> n;
	for (i = 0; i < n; i++) cin >> a[i];
	sort(a, a+n, dess);
	i = 0;
	while (k--){
		   t = t + (a[i] * a[i+1]);
		   i+=2;
	}
	cout << t << endl;
}

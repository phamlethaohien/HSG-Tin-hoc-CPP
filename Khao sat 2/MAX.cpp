#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    freopen("MAX.inp", "r", stdin);
    freopen("MAX.out", "w", stdout);
	ll n, i, j, k, res;
	cin >> n >> k;
	vector <ll> v;
	for (i = 1; i <= n; i++){
		j = i;
		if (j <= 9) v.push_back(j);
		else{
			res = j % 10;
			j = j /10;
			v.push_back(j);
			v.push_back(res);
	    }
	}
	if (k < 9) v.erase(v.begin(), v.begin() + k);
    else {
        v.erase(v.begin(), v.begin() + 8);
        if (k == 9) v.erase(v.begin() + 2);
        if (k == 14) {
            v.erase(v.begin() + 1, v.begin() + 6);
            v.erase(v.begin() + 2);
        }
        if ((k>=10 && k<=13) || k==15) v.erase(v.begin() + 1, v.begin() + (k-7));
    }
	for (i = 0; i < v.size(); i++) cout << v[i];
}

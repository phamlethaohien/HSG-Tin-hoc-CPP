#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
	cin >> n;
	double tmp = sqrt(n);
	(tmp - (long long)tmp == 0) ? cout << "YES" : cout << "NO";
	return 0;
}

// INPUT: 9
// OUTPUT: YES

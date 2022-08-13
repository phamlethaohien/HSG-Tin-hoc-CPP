#include <bits/stdc++.h>
using namespace std;

bool giam(int &a, int &b) {
    return (a>b);
}

const int n=8;
int main() {
  int a[n] = {10,20,30,30,20,10,10,20};
  sort(a, a+n, giam);        // 10 10 10 20 20 20 30 30

  int x=20;
  int low = lower_bound(a, a+n, x) - a; // iterator <= x
  int up = upper_bound(a, a+n, x) - a; //  iterator > x

  cout << "lower_bound at position: " << low <<endl;
  cout << "upper_bound at position " << up <<endl;

  return 0;
}




#include <bits/stdc++.h>
using namespace std;

string bp[12] = {
    "", "abc", "def",
    "ghi", "jkl", "mno",
    "pqrs", "tuv", "wxyz",
    "", " ", ""
};

int main() {
    freopen("SMS.inp", "r", stdin);
    freopen("SMS.out", "w", stdout);
	int T, L, kq, i, j, k;
	cin >> T;
    string nd;
    cin.ignore();
    while (T--) {
        getline(cin, nd);
        kq = 0;
        for (i = 0; i < nd.size(); i++) {
            for (j = 0; j < 12 ; j++) {
                for (k = 0; k < bp[j].size(); k++) {
                    if (nd[i] == bp[j][k])
                        L = k + 1;
                }
            }
            kq += L;
        }
        cout << kq << endl;
    }
    return 0;
}

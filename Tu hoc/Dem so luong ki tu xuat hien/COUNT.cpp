#include <bits/stdc++.h>
using namespace std;

string s;

void dem() {
    int d[255] = {0};
    for (int i=0; i<s.size(); i++) {
        if (s[i] != ' ') d[int(s[i])-64]++;
    }
    for(int i=1; i<=26; i++)
        if (d[i] > 0) cout<< char(64+i) << ":" << d[i] << endl;
}

int main() {
    int a[255] = {0};
    s = "AAAABCDEF";
    for (int i=0; i<s.size(); i++)
        a[s[i]]++;
    for (char c = 'A'; c <= 'Z'; c++)
        if (a[c] > 0) cout << c << ":" << a[c] << endl;
    cout << endl;

    dem();

    return 0;
}

/* OUTPUT:
A:4
B:1
C:1
D:1
E:1
F:1
*/

#include <bits/stdc++.h>
#define ll long long
#define maxN 20
using namespace std;
string s1,s2;
ll v1(0),v2(0);
void Enter() {
    cin >> s1 >> s2;
}
void Solve() {
    for (int i = 0;i < s1.length();i++) {
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
    }
    for (int i = 0;i < s1.length();i++) {
        v1 += (ll) s1[i];
        v2 += (ll) s2[i];
    }
    cout << v1 << "   " << v2 << endl;
    if (v1 == v2) cout << 0;
    if (v1 < v2) cout << -1;
    if (v1 > v2) cout << 1;
}
int main() {
    Enter();
    Solve();
}


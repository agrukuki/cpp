#include <bits/stdc++.h>
#define ll long long
using namespace std;
string s,t;
void Enter() {
    cin >> s >> t;
}
void Solve() {
    for (int i = 0;i < s.length();i++) {
        if (s[i] != t[s.length()-i-1]) {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}
int main() {
    Enter();
    Solve();
}




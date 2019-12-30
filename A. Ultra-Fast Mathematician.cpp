#include <bits/stdc++.h>
#define ll long long
#define maxN 100000
using namespace std;
string s1,s2,s;
void Enter() {
    cin >> s1 >> s2;
}
void Solve() {
    for (int i = 0;i < s1.length();i++) {
        if (s1[i] == s2[i]) {
            s.append("0");
        } else {
            s.append("1");
        }
    }
    cout << s;
}
int main() {
    Enter();
    Solve();
}


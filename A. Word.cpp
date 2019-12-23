#include <bits/stdc++.h>
#define ll long long
using namespace std;
string s;
ll cnt(0);
void Enter() {
    cin >> s;
}
void Solve() {
    for (int i = 0;i < s.length();i++) {
        if (s[i] == toupper(s[i])) {
            cnt++;
        }
    }
    if (cnt > s.length()/2) {
        for (int i = 0;i < s.length();i++) {
            s[i] = toupper(s[i]);
        }
    } else {
        for (int i = 0;i < s.length();i++) {
            s[i] = tolower(s[i]);
        }
    }
    cout << s;
}
int main() {
    Enter();
    Solve();
}


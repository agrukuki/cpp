#include <bits/stdc++.h>
#define ll long long
#define maxN 20
using namespace std;
string s;
void Enter() {
    cin >> s;
}
void Solve() {
    for (int i = 1;i < s.length();i++) {
        if (s[i] == tolower(s[i])) {
            cout << s;
            return;
        }
    }
    if (s[0] == tolower(s[0])) s[0] = toupper(s[0]);
    else s[0] = tolower(s[0]);
    //cout << s << endl;
    for (int i = 1;i < s.length();i++) {
        s[i] = tolower(s[i]);
    }
    cout << s;
}
int main() {
    Enter();
    Solve();
}



#include <bits/stdc++.h>
#define ll long long
#define maxN 109
using namespace std;
string s;
bool EC[127];
ll cnt(0);
void Init() {
    for (int i = 0;i < 127;i++) {
        EC[i] = false;
    }
}
void Enter() {
    getline(cin,s);
}
void Solve() {
    for (int i = 0;i < s.length();i++) {
        EC[s[i]] = true;
    }
    for (int i = 'a'; i <= 'z';i++) {
        if (EC[i]) cnt++;
    }
    cout << cnt;
}
int main() {
    Enter();
    Solve();
}


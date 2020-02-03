#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
string s,x;
void Enter() {
    cin >> s;
}
void Solve() {
    if (s.length() < 3) {
        cout << "FILIPINO" << endl;
        return;
    }
    x = s.substr(s.length()-3,3);
    if (x == "esu" || x == "asu") {
        cout << "JAPANESE"<< endl;
    } else if (x == "ida") {
        cout << "KOREAN" << endl;
    } else {
        cout << "FILIPINO"<< endl;
    }
}
int main() {
    cin >> n;
    for (int i = 0;i < n;i++) {
        Enter();
        Solve();
    }
}



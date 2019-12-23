#include <bits/stdc++.h>
#define ll long long
#define maxN 20
using namespace std;
ll x(0),t;
string s;
void Enter() {
    cin >> t;
}
void Solve() {
    for (int i = 0;i < t;i++) {
        cin >> s;
        if (s[1] == '+') {
            x++;
        } else {
            x--;
        }
    }
    cout << x;
}
int main() {
    Enter();
    Solve();
}


#include <bits/stdc++.h>
#define ll long long
#define maxC 123
using namespace std;
char y[4] = {'H','Q','9','+'};
string s;
void Enter() {
    cin >> s;
}
void Solve() {
    for (int i = 0;i < 4;i++) {
        if (s[0] == y[i]) {
            cout << "YES";
            return;
        }
    }
    cout << "NO";
}
int main() {
    Enter();
    Solve();
}


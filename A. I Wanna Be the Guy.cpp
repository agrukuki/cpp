#include <bits/stdc++.h>
#define ll long long
#define maxN 109
using namespace std;
ll n,p,Passed[maxN],t;
void Init() {
    for (int i = 0;i < maxN;i++) {
        Passed[i] = 0;
    }
}
void Enter() {
    cin >> n;
}
void Solve() {
    for (int i = 0;i < 2;i++) {
        cin >> p;
        for (int j = 0;j < p;j++) {
            cin >> t;
            Passed[t] = 1;
        }
    }
    for (int i = 1;i <= n;i++) {
        if (Passed[i] == 0) {
            cout << "Oh, my keyboard!";
            return;
        }
    }
    cout << "I become the guy.";
}
int main() {
    Enter();
    Solve();
}


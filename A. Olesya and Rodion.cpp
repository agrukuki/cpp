#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,t,r,s(1);
void Enter() {
    cin >> n >> t;
}
void Solve() {
    for (int i = 1;i < n;i++) {
        s *= 10;
    }
    if (t >= s * 10) {
        cout << -1;
        return;
    }
    r = s % t;
    if (r != 0) {
        s = s - r + t;
    }
    cout << s;
}
int main() {
    Enter();
    Solve();
}

#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,cnt(0),cntt(0),t;
void Enter() {
    cin >> n;
}
void Solve() {
    for (int i = 0;i < n;i++) {
        for (int i = 0;i < 3;i++) {
            cin >> t;
            if (t == 1) cnt++;
        }
        if (cnt > 1) cntt++;
        cnt = 0;
    }
    cout << cntt;
}
int main() {
    Enter();
    Solve();
}


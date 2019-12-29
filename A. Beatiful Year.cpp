#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
bool Exist[10];
void Init() {
    for (int i = 0;i < 10;i++) {
        Exist[i] = 0;
    }
}
bool OL(ll x) {
    Init();
    ll cnt(0);
    while(x > 0) {
        Exist[x % 10] = 1;
        x /= 10;
    }
    for (int i = 0;i < 10;i++) {
        if (Exist[i] == 1) {
            cnt++;
        }
    }
    if (cnt < 4) return false;
    return true;
}
void Enter() {
    cin >> n;
}
void Solve() {
    for (int i = n+1;i < 10000;i++) {
        if (OL(i)) {
            cout << i;
            return;
        }
    }
}
int main() {
    Enter();
    Solve();
}


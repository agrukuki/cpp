#include <bits/stdc++.h>
#define ll long long
#define maxN 100000
using namespace std;
ll n,a[maxN];
bool TP(ll x) {
    ll cnt(0);
    for (int i = 2;i < x;i++) {
        if (x % i == 0) {
            cnt++;
        }
        if (cnt > 1) return false;
    }
    if (cnt == 0) {
        return false;
    }
    //cout << cnt << endl;
    return true;
}
void Enter() {
    cin >> n;
    for (int i = 0;i < n;i++)
        cin >> a[i];
}
void Solve() {
    for (int i = 0;i < n;i++) {
        if (TP(a[i])) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
int main() {
    Enter();
    Solve();
}


#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,k;
void Enter() {
    cin >> n >> k;
}
void Solve() {
    if (n/2 == k/2*2 && n % 2 == 1) {
        if (k % 2 == 0) cout << n-2;
        else cout << n;
        return;
    }
    if (k <= n/2) {
        cout << k * 2 - 1;
    } else {
        cout << k * 2 - (n+1)/2*2;
    }
}
int main() {
    Enter();
    Solve();
}


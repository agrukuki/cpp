#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
ll k,n,t;
ld avg,w;
void Enter() {
    cin >> k >> n >> w;
}
void Solve() {
    avg = (w+1)/2 * k;
    t = avg * w;
    if (t > n) cout << (ll)t - n;
    else cout << 0;
}
int main() {
    Enter();
    Solve();
}




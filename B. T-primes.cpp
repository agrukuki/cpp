#include <bits/stdc++.h>
#define ll long long
#define maxN 1000009
// sqrt 10^12 = 10^6
using namespace std;
ll n,x;
bool Eratos[maxN];
void Init() {
    Eratos[0] = false;
    Eratos[1] = false;
    for (int i = 2;i <= maxN;i++) {
        Eratos[i] = true;
    }
    ll smn = sqrt(maxN);
    for (int i = 2;i <= smn;i++) {
        if (Eratos[i] == true) {
            for (int j = i*i;j <= maxN;j+=i) {
                Eratos[j] = false;
            }
        }
    }
}
void Enter() {
    cin >> x;
}
void Solve() {
    ll t = sqrt(x);
    if (t * t == x && Eratos[t]) cout << "YES" << endl;
    else cout << "NO" << endl;
}
int main() {
    Init();
    cin >> n;
    for (int i = 0;i < n;i++) {
        Enter();
        Solve();
    }
}


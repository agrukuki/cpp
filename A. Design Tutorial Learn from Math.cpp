#include <bits/stdc++.h>
#define ll long long
#define maxN 1000000
using namespace std;
ll n,x,y;
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
    cin >> n;
}
void Solve() {
    for (int i = 4;i <= n/2;i++) {
        if (!Eratos[i] && !Eratos[n-i]) {
            cout << i << " " << n-i;
            return;
        }
    }
}
int main() {
    Init();
    Enter();
    Solve();
}


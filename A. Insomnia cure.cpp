#include <bits/stdc++.h>
#define ll long long
#define maxD 100008
using namespace std;
ll k,l,m,n,d,Damaged[maxD],cnt(0);
void Init() {
    for (int i = 0;i < maxD;i++) {
        Damaged[i] = 0;
    }
}
void Enter() {
    cin >> k >> l >> m >> n >> d;
}
void Solve() {
    for (int i = 1;i <= d;i++) {
        if (i % k == 0) {
            Damaged[i] = 1;
        }
        if (i % l == 0) {
            Damaged[i] = 1;
        }
        if (i % m == 0) {
            Damaged[i] = 1;
        }
        if (i % n == 0) {
            Damaged[i] = 1;
        }
    }
    for (int i = 1;i <= d;i++) {
        if (Damaged[i] == 1) {
            cnt++;
        }
    }
    cout << cnt;
}
int main() {
    Init();
    Enter();
    Solve();
}


#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,cnt(0);
void Enter() {
    cin >> n;
}
void Solve() {
    while (n > 3) {
        n-=2;
        cnt++;
    }
    cout << cnt+1 << endl;
    for (int i = 0;i < cnt;i++) {
        cout << 2 << " ";
    }
    if (n == 3) cout << 3;
    else cout << 2;
}
int main() {
    Enter();
    Solve();
}


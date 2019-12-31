#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a,b,mi,ma;
void Enter() {
    cin >> a >> b;
}
void Solve() {
    mi = a;
    if (mi > b) mi = b;
    ma = a + b - mi;
    cout << mi << " " << (ma-mi) / 2;
}
int main() {
    Enter();
    Solve();
}




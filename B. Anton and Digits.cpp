#include <bits/stdc++.h>
#define ll long long
#define maxN 109
using namespace std;
ll k2,k3,k5,k6,s(0);
void Enter() {
    cin >> k2>>k3>>k5>>k6;
}
void Solve() {
    //find max within k2,k5,k6 after that its k3,k2
    ll m = min(k2,k5);
    m = min(m,k6);
    k2 -= m;
    k5 -= m;
    k6 -= m;
    s+= m * 256;
    m = min(k3,k2);
    s += m * 32;
    cout << s;
}
int main() {
    Enter();
    Solve();
}


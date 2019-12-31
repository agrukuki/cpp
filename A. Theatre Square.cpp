#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m,a;
void Enter() {
    cin >> n >> m >> a;
}
void Solve() {
    if (2*(n+m-a) % a == 0) {
        cout << 2*(n+m-a) / a;
    } else {
        cout << 2*(n+m-a) / a + 1;
    }
}
int main() {
    Enter();
    Solve();
}




#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
void Enter() {
    cin >> n;
}
void Solve() {
    if (n % 2 == 1) cout << (n+1)/2 * -1;
    else cout << (n+1)/2;
}
int main() {
    Enter();
    Solve();
}


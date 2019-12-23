#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,x(1);
void Enter() {
    cin >> n;
}
void Solve() {
    x += n*(n+1)/2;
    cout << x;
}
int main() {
    Enter();
    Solve();
}

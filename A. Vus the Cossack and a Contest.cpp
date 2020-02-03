#include <bits/stdc++.h>
#define ll long long
#define maxC 123
using namespace std;
ll n,m,k;
void Enter() {
    cin >> n >> m >> k;
}
void Solve() {
    if (n > m || n > k) cout << "No";
    else cout << "Yes";
}
int main() {
    Enter();
    Solve();
}


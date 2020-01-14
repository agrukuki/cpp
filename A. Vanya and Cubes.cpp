#include <bits/stdc++.h>
#define ll long long
#define maxC 123
using namespace std;
ll n,f[200],i(0),s(0);
void Enter() {
    cin >> n;
}
void Solve() {
    f[0] = 0;
    while (s < n) {
        i++;
        f[i] = f[i-1] + i;
        s += f[i];
    }
    if (s == n) {
        cout << i;
    } else {
        cout <<i-1;
    }
}
int main() {
    Enter();
    Solve();
}

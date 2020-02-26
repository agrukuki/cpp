#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,b(1);
void Enter() {
    cin >> n;
}
void Solve() {
    while (n > 1) {
        if (n % 2 == 1) {
            b++;
        }
        n/=2;
    }
    cout << b;
}
int main() {
    Enter();
    Solve();
}

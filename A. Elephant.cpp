#include <bits/stdc++.h>
#define ll long long
#define maxN 20
using namespace std;
ll x;
void Enter() {
    cin >> x;
}
void Solve() {
    if (x % 5 == 0) {
        cout << x/5;
        return;
    }
    cout << x/5+1;
}
int main() {
    Enter();
    Solve();
}




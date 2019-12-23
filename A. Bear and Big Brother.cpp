#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a,b,i(0);
void Enter() {
    cin >> a >> b;
}
void Solve() {
    while (a <= b) {
        a *= 3;
        b *= 2;
        i++;
    }
    cout << i;
}
int main() {
    Enter();
    Solve();
}




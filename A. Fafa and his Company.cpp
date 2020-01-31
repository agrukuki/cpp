#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,a(1);
void Enter() {
    cin >> n;
}
void Solve() {
    for (int i = 2;i < n;i++) {
        if (n % i == 0) a++;
    }
    cout << a;
}
int main() {
    Enter();
    Solve();
}




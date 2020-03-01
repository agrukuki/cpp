#include <bits/stdc++.h>
#define ld long double
#define ll long long
#define maxN 2000002
using namespace std;
ll n,k;
void Enter() {
    cin >> n >> k;
}
void Solve() {
    for (int i = 0;i < k;i++) {
        if (n%10==0) n /= 10;
        else n--;
    }
    cout << n;
}
int main() {
    Enter();
    Solve();
}


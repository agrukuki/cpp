#include <bits/stdc++.h>
#define ll long long
#define maxN 109
using namespace std;
ll a,t;
void Enter() {
    cin >> a;
}
void Solve() {
    if (360 % (180 - a) == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
int main()
{
    for (int i = 0;i < t;i++) {
        Enter();
        Solve();
    }
    return 0;
}


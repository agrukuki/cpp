#include <bits/stdc++.h>
#define ll long long
#define maxN 102
using namespace std;
ll tx,ty,tz,x(0),y(0),z(0),n;
void Enter() {
    cin >> n;
    for (int i = 0;i < n;i++) {
        cin >> tx >> ty >> tz;
        x+=tx;
        y+=ty;
        z+=tz;
    }
}
void Solve() {
    if (x == 0 &&y == 0 &&z == 0) cout << "YES";
    else cout << "NO";
}
int main() {
    Enter();
    Solve();
}


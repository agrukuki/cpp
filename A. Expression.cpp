#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a,b,c,s,mi,ma,md;
void Enter() {
    cin >> a >> b >> c;
}
void Solve() {
    mi = a;
    ma = a;
    if (mi > b) mi = b;
    if (mi > c) mi = c;
    if (ma < b) ma = b;
    if (ma < c) ma = c;
    md = a + b + c - mi - ma;
    if (ma == 1) {
        cout << 3;
        return;
    }

    if (mi == 1) {
        if (md == 1) {
            if (md == b) s = 2 * ma;
            else s = a + b + c;
        }
        else if (c == 1) s = a*(b+c);
        else if (a == 1) s = (a+b)*c;
        else s = (md+1)*ma;
    }
    else s = a * b * c;
    //cout << mi << " " << md << " " << ma << endl;
    cout << s;
}
int main() {
    Enter();
    Solve();
}




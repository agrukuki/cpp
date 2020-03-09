#include <bits/stdc++.h>
#define ll long long
#define maxN 109
using namespace std;
ll a,b,c,n,t,differences;
void Enter() {
    cin >> a >> b >> c >> n;
}
void Solve() {
    ll m = max(a,b);
    m = max(m,c);
    ll d = m*3 - a - b - c;
    //cout << m <<"    "<< d <<"    "<< n-d <<"    " << endl;
    if (n - d >= 0 && (n-d)%3 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
int main() {
    cin >> t;
    for (int i = 0;i < t;i++) {
        Enter();
        Solve();
    }
    return 0;
}


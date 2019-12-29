#include <bits/stdc++.h>
#define ll long long
#define maxN 100000
using namespace std;
ll a[maxN],t,smt,cnt(0),po,pe;
void Enter() {
    cin >> t;
    for (int i = 0;i < t;i++) {
        cin >> smt;
        a[i] = smt%2;
    }
}
void Solve() {
    for (int i = 0;i < t;i++) {
        if (a[i] == 1) {
            cnt++;
            pe = i;
        } else {
            po = i;
        }
    }
    cout << cnt << " " << pe << " " << po << endl;
    if (cnt == 1) {
        cout << pe+1;
    } else {
        cout << po+1;
    }
}
int main() {
    Enter();
    Solve();
}


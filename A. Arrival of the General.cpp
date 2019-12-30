#include <bits/stdc++.h>
#define ll long long
#define maxN 100
using namespace std;
ll n,a[maxN],mi(101),ma(0),pi,pa;
void Enter() {
    cin >> n;
    for (int i = 0;i < n;i++) {
        cin >> a[i];
        if (mi > a[i] || mi == a[i]) {
            mi = a[i];
            pi = i;
        }
        if (ma < a[i]) {
            ma = a[i];
            pa = i;
        }
    }
}
void Solve() {
    cout << mi << "  "<< pi << "  "<< ma << "  "<< pa << endl;
}
int main() {
    Enter();
    Solve();
}


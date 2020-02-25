#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
ld n,m,a;
int main() {
    cin >> n >> m >> a;
    cout << (ll)ceil(n/a)*(ll)ceil(m/a);
}

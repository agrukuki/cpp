#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,hu(0),tw(0),te(0),fi(0),on(0);
void Enter() {
    cin >> n;
}
void Solve() {
    hu = n / 100;
    n -= hu * 100;
    //cout << n << " " << hu << " " <<tw << " " <<te << " " <<fi << " " <<on << endl;
    tw = n / 20;
    n -= tw * 20;
    //cout << n << " " << hu << " " <<tw << " " <<te << " " <<fi << " " <<on << endl;
    te = n / 10;
    n -= te * 10;
    //cout << n << " " << hu << " " <<tw << " " <<te << " " <<fi << " " <<on << endl;
    fi = n / 5;
    n -= fi * 5;
    //cout << n << " " << hu << " " <<tw << " " <<te << " " <<fi << " " <<on << endl;
    on = n;
    n -= on;
    //cout << n << " " << hu << " " <<tw << " " <<te << " " <<fi << " " <<on << endl;
    cout << hu + tw + te + fi + on;
}
int main() {
    Enter();
    Solve();
}




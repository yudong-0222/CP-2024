#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int me(int  x, int y, int p) {
    if(y == 0) return 1;
    if(y & 1) return (me(x, y-1, p)*x)%p;
    int r = (me(x, y/2, p) % p);
    return (r*r) % p;
}
signed main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string x; int y,p,yn=0,mn=0;
    cin >> x >> y >> p;

    for(int i = x.size()-1; i >= 0; --i) {
        yn = (yn + (x[i] - '0')*me(10, mn, p))%p; mn++;
    }

    cout << me(yn , y ,p);
}
#include <bits/stdc++.h>
#define read(type) readInt<type>() // Fast read
#define int long long
#define endl "\n"
#define pb push_back
#define eb emplace_back
#define mk make_pair
#define pii pair<int, int>
#define F first
#define S second
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1e9 + 7
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))
using namespace std;

int re(int x, int y, int p) {
    if(y == 0) return 1;
    if(y & 1) return (re(x,y-1,p) * x) % p;
    int r = re(x,y/2, p);
    return (r*r) % p;
}

signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int x,y,p; cin >> x >> y >> p;
    int ans = 1;
    ans = re(x,y,p);
    
    cout << ans << endl;
}
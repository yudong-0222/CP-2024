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

signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vector<pair<int, int> > v;

    for(int i = 0; i < n; ++i) {
        int x,y; cin >> x >> y;
        v.push_back({x,y}); //eb 要 mk 好懶
    }

    int mx = imin, mi = imax;
    for(int i = 1; i < n; ++i) {
        int d = abs(v[i].F - v[i-1].F) + abs(v[i].S - v[i-1].S);
        mx = max(mx, d); mi = min(mi, d);
    }

    cout << mx << " " << mi << endl;

}
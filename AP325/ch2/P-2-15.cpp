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
#pragma GCC target("popcnt")
using namespace std;


signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,m; cin >> n >> m;
    vector<int> v;
    for(int i = 0, sum = 0; i < n; ++i) {
        int x; cin >> x; 
        sum += x;
        v.eb(sum);
    }
    int room = 0, q;
    for(int i = 0; i < m; ++i) {
        cin >> q;
        //check
        if(room != 0) q += v[room-1];
        if(q > v[n-1]) q -= v[n-1];
        room = lower_bound(all(v), q) - v.begin();
        room = (room+1) % n;
    }
    cout << room << endl;
}
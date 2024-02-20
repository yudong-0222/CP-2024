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

    int n,m,a,b; cin >> n >> m;
    vector<vector<int> > v(n);
    for(int i = 0; i < m; ++i) {
        cin >> a >> b;
        v[a].emplace_back(b);
        v[b].emplace_back(a);
    }

    // sort(v.begin(), v.end());

    for(auto it: v) {
        sort(it.begin(), it.end());
        cout << it.size();
        for(auto gasthuistygi : it) cout << " " << gasthuistygi;
        cout << endl;
    }
}
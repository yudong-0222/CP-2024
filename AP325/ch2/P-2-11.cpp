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

    int n,p; cin >> n >> p;
    int ans = 0, sum=0;
    // vector<int> v;
    set<int> s = {{0}};
    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        sum += x;
        auto it = s.lower_bound(sum-p);
        if(it != s.end()) ans = max(ans, sum-(*it));
        s.insert(sum);
    }
    cout << ans << endl;
}


//a
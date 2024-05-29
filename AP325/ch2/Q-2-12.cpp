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

    int K,m,n; cin >> K >> m >> n;
    vector<vector<int> > v(m, vector<int>(n));
    vector<vector<int> > pre(m+1, vector<int>(n,0));

    for(int i = 0; i < m; ++i)for(int j = 0; j < n; ++j) {
        cin >> v[i][j];
    }

    //prefix_sum of each col.
    for(int i = 0; i < n; ++i) for(int j = 1; j <= m; ++j) {
        pre[j][i] = pre[j-1][i] + v[j-1][i];
    }
    int ans = 0;
    for(int i = 0; i < m; ++i) for(int j = i; j < m; ++j) {
        vector<int> vv(n);
        for(int k = 0; k < n; ++k) {
            //(下邊界+1) - 上邊界 的 prefix-sum;
            vv[k] = pre[j+1][k] - pre[i][k];
        }

        set<int> S{{0}};
        int sum = 0;
        for(int k = 0; k < n; ++k) {
            sum+=vv[k];
            auto it = S.lower_bound(sum - K);
            if(it != S.end()) {
                ans = max(ans, sum-(*it));
            }
            S.insert(sum);
        }
    }
    cout << ans << endl;
}
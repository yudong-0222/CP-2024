#pragma GCC optimize("Ofast,fast-math,unroll-loops,no-stack-protector")
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

    int n,l; cin >> n >> l;

    vector<int> v(n+1,0);
    deque<int> min_dq, max_dq;
    int ans = -10;
    min_dq.push_back(0); max_dq.push_back(0);

    for(int i = 0; i < n; ++i) cin >> v[i];    
    
    for(int i = 1; i < n; ++i) {
        {
            if(min_dq.front() <= i - l) min_dq.pop_front();
            // cout << "deg: " << min_dq.back() << endl;
            while(!min_dq.empty() && v[min_dq.back()] >= v[i]) min_dq.pop_back();
            min_dq.push_back(i);
        }
        {
            if(max_dq.front() <= i-l) max_dq.pop_front();
            while(!max_dq.empty() && v[max_dq.back()] <= v[i]) max_dq.pop_back();
            max_dq.push_back(i);
        }
        int d = v[max_dq.front()] - v[min_dq.front()];
        ans = max(ans, d);
    }
    cout << ans << endl;
}
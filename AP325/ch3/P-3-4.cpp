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

const int N = 10000001;

signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, ans = 0; cin >> n;
    //pair<num, index};
    stack<pair<int, int>> st; st.push({N<<1, 0});
    for(int i = 1, x; i <= n; ++i) {
        cin >> x;
        while(st.top().F <= x) st.pop();
        ans += i - st.top().S;
        st.push({x,i});
    }

    cout << ans << endl;
}
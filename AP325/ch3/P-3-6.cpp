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
    // I think it:
        // find 他是哪一邊
        //then check range for left
        //check range for right
        //check if isn't empty();
    int N,R; cin >> N >> R;
    vector<int>v(N+5), h(N+5);
    v[0] = 0; h[0] = exp; //省略檢查邊界的傻逼咚咚。
    for(int i = 1; i <= N; ++i) cin >> v[i];
    for(int i = 1; i <= N; ++i) cin >> h[i];
    v[N+1] = R;
    stack<int> st; st.push(0);
    int ans = 0, mx=0; //mx is the max height for the tree which can be cut. 
    for(int i = 1; i <= N; ++i) {
        while(v[st.top()] + h[st.top()] <= v[i]) {
            ans++; mx = max(mx, h[st.top()]); st.pop(); 
        }
        if(v[st.top()] <= v[i] - h[i] || v[i] + h[i] <= v[i+1]) ans++, mx = max(mx, h[i]);
        else st.push(i);
    }
    while(v[st.top()] + h[st.top()] < R) {ans++;mx=max(mx, h[st.top()]);st.pop();}

    cout << ans << endl << mx << endl;
}
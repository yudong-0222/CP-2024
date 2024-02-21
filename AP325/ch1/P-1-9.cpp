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

int q(int n, int k, int p[]) {
    if(k >= n) return 1; //表示成功這列
    int to = 0;
    bool va[n];

    for(int i = 0; i < k; ++i) va[i] = true;

    for(int i = 0; i < k; ++i) {
        va[p[i]] = false;
        int x=k-i+p[i];
        if(x<n) va[x] = false;
        x=p[i]-(k-i);
        if(x >= 0) va[x] = false;
    }

    for(int i = 0; i  < n; ++i) {
        if(va[i]) p[k] = i; to += q(n, k+1, p);
    }

    return to;
}

signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    int p[n+5];
    set<int> st;
    for(int i =0 ;i < n; ++i) {
        st.insert(q(i, 0, p));
    }    
    cout << st.size() << endl;
}
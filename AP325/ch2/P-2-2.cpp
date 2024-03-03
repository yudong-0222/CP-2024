#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

signed main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n; cin >> n;
    set<int> st;
    vector<int> p(100010);

    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        p[i] = x;
        st.emplace(x);
    }

    vector<int> co(st.begin(), st.end());
    
    for(int i = 0; i < n; ++i) {
        auto it = lower_bound(co.begin(), co.end(), p[i]);
        p[i] = distance(co.begin(), it);
    }

    // for(int i = 0; i < n; ++i) {
    //     auto it = st.lower_bound(p[i]);
    //     p[i] = distance(st.begin(), it);
    // }
    
    for(int i = 0; i < n-1; ++i) cout << p[i] << " ";
    cout << p[n-1] << endl;
}
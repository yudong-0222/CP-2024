#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

signed main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int m,n,k; cin >> m >> n >> k;
    set<int> s1;
    for(int i = 0; i < m; ++i) {
        int x; cin >> x;
        s1.emplace(x);
    }
    
    int ans = 0;
    for(int i = 0; i < n; ++i) { // B 集合中的所有元素
        int x; cin >> x;
        if(s1.find(k-x) != s1.end()) ans++;
    }
    cout << ans << endl;
}
#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

signed main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    //declare
    int m,n,k,ans=0; cin >> m >> n >> k;
    vector<int> a(m),b(n);
    
    for(int i = 0; i < m; ++i) cin >> a[i];
    for(int i = 0; i < n; ++i) cin >> b[i];

    sort(a.begin(), a.end());

    for(int i = 0; i < n; ++i) {
        int id = lower_bound(a.begin(),a.end(), k-b[i]) - a.begin();
        if(id == n) continue;
        else if(k-b[i] == a[id]) ans ++;
    }

    cout << ans << endl;

}
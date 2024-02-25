#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

//declare
int p[19][19];
int g[19] = {-1};
int n, ans = 0;

void w(int k, int total) {
    if(k >= n) {
        ans = max(ans, total); return;
    }
    for(int i = 0; i < n; ++i) {
        bool canUse = true;
        for(int j = 0; j < k; ++j) {
            if(g[j] == i || abs(g[j]-i) == k - j) {
                canUse = false; break;
            }
        }
        
        if(!canUse) {continue;}
        g[k] = i;
        w(k+1, total+p[i][k]);
    }
    g[k] = -1e9; 
    w(k+1, total);
}

signed main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> n;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> p[i][j];
        }   
    }

    w(0,0);
    cout << ans << endl;
}
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

int t[45][45] = {0};

signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,m; cin >> n >> m;

    int s = 0;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> t[i][j];
        }
    }

    for(int k = 0; k < 1000; ++k) {
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < m; ++j) {
                if(t[i][j] == -1) continue;
                
                if(i > 0) {
                    int k = i - 1;
                    while(k >= 0 && t[k][j] == -1) k--; //枚舉到一定的 k
                    if(t[k][j] == t[i][j]) {
                        s += t[i][j];
                        t[k][j] = -1; t[i][j] = -1;
                        continue;
                    }
                }
                
                if(j > 0) {
                    int kk = j - 1;
                    while(kk >= 0 && t[i][kk] == -1) kk--;
                    if(t[i][kk] == t[i][j]) {
                        s+= t[i][j];
                        t[i][kk] = -1; t[i][j] = -1;
                        continue;
                    }
                }
            }
        }
    }

    cout << s << endl;



}

/*
m371

被削除的那一格標記為 -1
先往左檢查，再往上檢查
如果有中間隔著 -1 的，則是檢查到第二個 -1 的下一個
*/
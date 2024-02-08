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

string s[10000];

signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int h,w; cin >> h >> w;
    int ans = 0;

    int x[8] = {0,1,1,1,0,-1,-1,-1};
    int y[8] = {1,1,0,-1,-1,-1,0,1};

    for(int i = 0; i < h; ++i) cin >> s[i];

    for(int i = 0; i < h; ++i) { // 直排
        for(int k = 0; k < w; ++k) { //橫排
            if(s[i][k] == '#') cout << '#'; // output a # if there is a #
            else {
                int cnt = 0; // amount of the bomb nearby
                for(int j = 0; j < 8; ++j) {
                    int cx = i + x[j], cy = k + y[j]; //8 directions
                    if(cx < 0 || cy < 0 || cx >= h || cy >= w) continue; //
                    if(s[cx][cy] == '#') cnt ++;
                }
                cout << cnt;
            }
        }
        cout << endl;
    }
}

/*
邊界檢查：
在計算相鄰方格的索引時，如果不小心計算到了矩陣邊界的外側
就會出現 cx < 0 或 cy < 0 的情況。
例如，當 i=0 或 k=0 時，往左或往上移動時會出現 < 0 的情況。

超出邊界：
當計算出的相鄰方格索引 cx 或 cy 大於等於 H 或 W 時
代表超出了矩陣的邊界，即 cx >= H 或 cy >= W。
這可能發生在最右側、最下方或任何超出矩陣範圍的位置。
*/
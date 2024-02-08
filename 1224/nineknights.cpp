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

//八個方位各自的 (x,y)
//但我還沒想好我要怎麼解釋這個，還沒想到明天上課想。
int x[8] = {2,2,1,1,-1,-1,-2,-2}; 
int y[8] = {1,-1,2,-2,2,-2,1,-1};

// anti 邊界異味，異位性皮膚炎。
bool in_range(int a, int b) {
    return a >= 0 && a < 5 && b >= 0 && b < 5;
}

signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string b[10005]; //記得要宣告大小，才能使用 cin >> b[i];

    for(int i = 0; i < 5; ++i) cin >> b[i];

    bool gay = false;
    int kn = 0;

    // 枚舉所有座標
    for(int i = 0; i < 5; ++i) {
        for(int j = 0; j < 5; ++j) {
            if(b[i][j] == 'k') {
                kn ++;
                for(int k = 0; k < 8; ++k) { // 八個方位，八方雲集。
                    int cx = i + x[k], cy = j + y[k];
                    if(in_range(cx, cy) && b[cx][cy] == 'k') gay = true;
                }
            }
        }
    }
    if(kn != 9) gay = 1;
    if(!gay) cout << "valid\n";
    else cout << "invalid\n";
}
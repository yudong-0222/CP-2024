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

    int a,b; cin >> a >> b;

    int cnt = 0;
    for(int i = a; i <=b; ++i) {
        // check 十位數 是否有與千位數箱等, 個位數是否與萬位數相等
        // 因為是回文，又因為一錠是五位數，所以不必 check 中間那位數。
        if((i/10)%10 == (i/1000)%10 && i%10 == i/10000) cnt++;
    }
    cout << cnt << endl;
}
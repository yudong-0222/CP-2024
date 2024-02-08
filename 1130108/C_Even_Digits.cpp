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

bool gay(const string& a){
    for(char c : a) {
        if((c - '0') % 2 != 0) return false;
    }
    return true;
} 

signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    int cnt = 0;
    string ans = "0";
    while(cnt < n) {
        if(gay(ans)) cnt ++;
        int x = 1;
        for(int i = ans.size() - 1; i >= 0; i--) {
            int d = ans[i] - '0' + x;
            ans[i] = (d % 10) + '0';
            x = d/10;
        }
        if(x > 0) ans = '1' + ans;
    }

    cout << ans << endl;
}
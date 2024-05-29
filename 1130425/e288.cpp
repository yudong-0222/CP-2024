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

int convert(char c) {
    if(c >= 'A' && c <= 'Z') return c - 'A';
    else return c - 'a' + 26; //幹我是諧咖，一開始寫成 c - 'A' + 26 然後吃 WA
}

signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int m,n; cin >> m >> n; 
    int ans = 0;
    string s;

    umap<int, int> mp;

    for(int x = 0; x < n; ++x) {
        cin >> s;
        int t = 0, mask = (1LL<<m)-1;
        for(int i = 0; i < s.size();++i)
            t |= 1LL << (convert(s[i]));
            
        ans += mp[t ^ mask]; //如果存在就加起來
        mp[t]++; //把字母給記錄下來

    }

    cout << ans << endl;
}
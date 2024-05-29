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

    umap<string, int> mp= {
        {"ShunZhi", 1644} ,
        {"KangXi", 1662} ,
        {"YongZheng", 1723} ,
        {"QianLong", 1736} ,
        {"JiaQing", 1796} ,
        {"DaoGuang", 1821} ,
        {"XianFeng", 1851} ,
        {"TongZhi", 1862} ,
        {"GuangXu", 1875} ,
        {"XuanTong", 1909}
        };
    string s; int y; cin >> s >> y;

    int ans = mp[s] + y;
    cout << ans-1 << endl;
    
}
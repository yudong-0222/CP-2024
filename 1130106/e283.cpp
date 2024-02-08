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


map<string ,string> mp;

void co() {
    mp["0 1 0 1"] = "A", mp["0 1 1 1"] = "B", mp["0 0 1 0"] = "C", mp["1 1 0 1"] = "D", mp["1 0 0 0"] = "E", mp["1 1 0 0"] = "F";
}
signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    co();

    int n;
    while(cin >> n) {
        string final,s; getline(cin, s);
        while(n--) {
            string x; getline(cin, x);
            final +=mp[x];
        }
        cout << final << endl;
    }
        
}
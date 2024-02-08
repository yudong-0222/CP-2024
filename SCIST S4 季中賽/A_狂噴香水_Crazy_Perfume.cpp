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

    int n,f = 0,se = 0;
    cin >> n;
    while(n--) {
        string a,b;
        cin >> a >> b;

        int r,k;
        if(a != "J" && a != "Q" && a != "K") r = stoi(a);
        else if(a == "J") r = 11;
        else if (a == "Q") r = 12;
        else if(a =="K") r = 13;

        if(b != "J" && b != "Q" && b != "K") k = stoi(b);
        else if(b == "J") k = 11;
        else if (b == "Q") k = 12;
        else if(b == "K") k = 13;

        // cout << "r: " << r << endl;
        // cout << "k: " << k << endl;

        if(r > k) f += r - k;
        else if (r < k) se += k - r;
        else if(r == k) continue;
    }    
    cout << se << " " << f << endl;
}
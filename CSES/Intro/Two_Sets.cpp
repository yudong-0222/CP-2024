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

    int n, ans = 0; cin >> n;
    
    if(n * (n+1)/2 % 2 != 0) cout << "NO\n";
    else {
        cout << "YES\n";

        vector<int> f;
        vector<int> v;

        if(n%2 == 0) {
            for(int i = 0; i  < n/2; ++i) {
                if(i % 2 == 0) {
                    f.eb(i + 1LL);
                    f.eb(n - i);
                } else {
                    v.eb(i + 1LL);
                    v.eb(n - i);
                }
            }
        } else {
            for(int i = 0; i < (n-1)/2; ++i) {
                if(i%2 == 0) {
                    f.eb(i + 1LL);
                    f.eb(n-i-1);
                } else {
                    v.eb(i + 1LL);
                    v.eb(n - i - 1);
                }
            }

            if(f.size() > v.size()) v.eb(n);
            else f.eb(n);
        }
        
        cout << f.size() << endl;
        for(int i :f) cout << i << " ";
        cout << endl;
        cout << v.size() <<endl;
        for(int i :v) cout << i << " ";
        cout << endl;
    }
}


// 給定一 n，求出將 1 ~ n 分為兩組數字總和相等的數字 
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

    int n; cin >> n;
    cin.ignore();
    for(int i = 0; i < n; ++i) {
        string s;
        getline(cin, s);
        
        vector<bool> v;
        v.resize(26, false);

        int x = 0;
        for(char c : s) {
            int t = tolower(c) - 'a';
            if(t >= 0 && t < 26 && !v[t]) {
                v[t] = true; x++;
            }
        }

        if(x == 26) cout << "pangram\n";
        else {
            cout << "missing ";
            for(int k = 0; k < 26; ++k) {
                if(!v[k]) cout<< (char)(k + 'a');
            }
            cout << endl;
        }
    }    
}
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
#pragma GCC target("popcnt")
using namespace std;


signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s; 
    while(cin >> s) {
        stack<char> S;

        for(int i = 0; i < (int)s.size(); ++i) {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
                S.emplace(s[i]);
            } else {
                if(!S.empty()) {
                    if((s[i] == ')' && S.top() == '(')
                        || (s[i] == ']' && S.top() == '[') 
                        || (s[i] == '}' && S.top() == '{')
                    ) S.pop();
                } else break;
            }        
        }
        (S.empty()) ? cout << "yes\n" : cout << "no\n";
    }
}
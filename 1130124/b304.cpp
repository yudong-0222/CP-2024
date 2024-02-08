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
    while(n--) {
        bool isGay = false;
        stack<int> st;
        string s; getline(cin, s);
        if(s == " ") {cout << "Yes\n"; continue;}

        for(int i = 0; i < s.size(); ++i) {
            if(st.empty() || s[i] == '(' || s[i] == '[') st.emplace(s[i]);
            else if(!st.empty()) {
                if((st.top() == '(' && s[i] == ')' )|| (st.top() == '[' && s[i] == ']')) st.pop();
                else {isGay = true; break;}
            }
        }
        if(!st.empty()) isGay = true;
        
        if(isGay) cout << "No\n";
        else cout << "Yes\n";
    }
}
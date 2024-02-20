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

    int n,x,a; cin >> n;
    set<int> st;

    for(int i = 0; i < n; ++i) {
        cin >> x;
        switch(x) {
            case 1:
                cin >> a;
                st.insert(a);
                break;
            case 2:
                cin >> a;
                st.erase(a);
                break;
            case 3:
                if(st.empty()) cout << "WA\n";
                else cout << *st.begin() << endl;
                break;
            case 4:
                if(st.empty()) cout << "WA\n";
                else cout << *st.rbegin() << endl;
                break;
            case 5:
                cin >> a;
                if(st.empty() || a <= *st.begin()) cout << "WA\n";
                else cout << *(--st.lower_bound(a)) << endl;
                break;
            case 6:
                cin >> a;
                if(st.empty() || a >= *st.rbegin()) cout << "WA\n";
                else cout << *st.upper_bound(a) << endl;
                break;
            case 7:
                cout << st.size() << endl;
                break;
            default:
                break;
        }
    }
}
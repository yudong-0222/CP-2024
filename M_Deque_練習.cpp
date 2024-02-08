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

    deque<int> dq;
    int n; cin >> n;

    for(int i = 0; i < n; ++i) {
        int x,a; cin >> x;
        switch (x) {
            case 1:
                cin >> a;
                dq.emplace_front(a);
                break;
            case 2:
                cin >> a;
                dq.emplace_back(a);
                break;
            case 3:
                if(dq.empty()) cout << "WA\n";
                else cout << dq.front() << endl;
                break;
            case 4:
                if(dq.empty()) cout << "WA\n";
                else cout << dq.back() << endl;
                break;
            case 5:
                if(!dq.empty()) dq.pop_front();
                break;
            case 6:
                if(!dq.empty()) dq.pop_back();
                break;
            case 7:
                cout << dq.size() << endl;
                break;
            default:
                break;
        }
    }    
}
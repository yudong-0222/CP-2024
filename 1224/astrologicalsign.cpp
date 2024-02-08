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


const string month[] =  {"" , "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

const string ga[] = {"Capricorn", "Aquarius", "Pisces", "Aries", "Taurus", "Gemini", "Cancer", "Leo", "Virgo", "Libra", "Scorpio", "Sagittarius", "Capricorn"};
const int day[] = {120, 219, 320, 420, 520, 621, 722, 822, 921, 1022, 1122, 1221, 9999};

int change(const string & s) {
    for(int i = 1; i<=12; ++i) {
        if(s == month[i]) return i;
    }
    return -1;
}

signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    while(n--) {
        int m; string st; cin >> m >> st;
        int r = change(st) * 100 + m;

        int ans;
        for(ans = 0;  r > day[ans]; ++ans);
        cout << ga[ans] << endl;
    }    
}
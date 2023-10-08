/**
 *        Bismillahir Rahmanir Rahim
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 08/10/2023 13:32:46
 **/
#include <bits/stdc++.h>

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

#define all(x) (x).begin(), (x).end()
#define sz(x) int(x.size())
#define char2Int(c) (c - '0')
#define lastEle(vec) vec[vec.size() - 1]
#define PI 3.1415926535897932384626433832795l
#define endl '\n'

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vi> vvi;
typedef map<int, int> mpii;
typedef set<int> seti;
typedef multiset<int> mseti;

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve()
{
    string s;
    int x, y;
    cin >> x >> y;
    cin >> s;

    int l(0), r(0), d(0), u(0);

    for (char c : s)
    {
        if (c == 'L')
            l++;
        if (c == 'R')
            r++;
        if (c == 'U')
            u++;
        if (c == 'D')
            d++;
    }

    bool xx(0), yy(0);

    if ((x >= 0 && r >= x) || (x <= 0 && l >= abs(x)))
        xx = 1;

    if ((y >= 0 && u >= y) || (y <= 0 && d >= abs(y)))
        yy = 1;

    cout << (xx && yy ? "YES" : "NO") << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif

    int _;
    cin >> _;
    while (_--)
        solve();

    return 0;
}
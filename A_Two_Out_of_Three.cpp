/**
 *        Bismillahir Rahmanir Rahim
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 12/11/2023 23:13:58
 **/
#include <bits/stdc++.h>

#ifdef BERLIN
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

#define all(x) (x).begin(), (x).end()
#define sz(x) ((long long)x.size())
#define char2Int(c) (c - '0')
#define lastEle(vec) vec[vec.size() - 1]
#define PI 3.1415926535897932384626433832795l
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define range(i, v) for (auto &i : v)
#define fix(prec)                            \
    {                                        \
        cout << setprecision(prec) << fixed; \
    }
#define mem(arr, v) memset(arr, v, sizeof(arr))
#define getunique(v)                      \
    {                                     \
        sort(all(v));                     \
        v.erase(unique(all(v)), v.end()); \
    }
#define Muichiro                          \
    {                                     \
        ios_base::sync_with_stdio(false); \
    }
#define Tokito          \
    {                   \
        cin.tie(NULL);  \
        cout.tie(NULL); \
    }

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpi;
typedef vector<pll> vpl;

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve()
{
    int n;
    cin >> n;

    vi v(n);

    range(i, v) cin >> i;

    int count = 0;

    map<int, int> mp;

    for (int i = 0; i < n; ++i)
    {
        mp[v[i]]++;
    }

    if (sz(mp) == 1)
    {
        cout << -1 << endl;
        return;
    }

    debug(mp);

    int val = 0;

    range(i, mp)
    {
        if (i.s >= 2)
        {
            val++;
        }
    }

    if (val < 2)
    {
        cout << -1 << endl;
        return;
    }

    vi v2(n, 1);

    vi in;

    int x(0);

    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (v[i] == v[j] && v[i] != x)
            {
                x = v[i];
                in.pb(j);
            }
        }
    }

    v2[in[0]] = 2;
    v2[in[1]] = 3;

    debug(in);

    range(i, v2) cout << i << " ";

    cout << endl;
}

int main()
{
    Muichiro Tokito

#ifdef BERLIN
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
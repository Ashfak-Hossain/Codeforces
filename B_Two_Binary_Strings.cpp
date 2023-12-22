/**
 *        Bismillahir Rahmanir Rahim
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 22/12/2023 23:49:36
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
#define fix(prec) cout << setprecision(prec) << fixed;
#define mem(arr, v) memset(arr, v, sizeof(arr))
#define getunique(v)                      \
    {                                     \
        sort(all(v));                     \
        v.erase(unique(all(v)), v.end()); \
    }
#define Muichiro ios_base::sync_with_stdio(false);
#define Tokito cin.tie(NULL);

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

void Free_Palestine()
{

    string a, b;
    cin >> a >> b;
    bool ok = false;
    for (int i = 0; i + 1 < a.size(); ++i)
    {
        if (a[i] == b[i] && a[i] == '0' && a[i + 1] == b[i + 1] && a[i + 1] == '1')
        {
            ok = true;
        }
    }

    if (ok)
        puts("YES");
    else
        puts("NO");
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
        Free_Palestine();

    return 0;
}
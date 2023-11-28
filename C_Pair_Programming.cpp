/**
 *        Bismillahir Rahmanir Rahim
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
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

    int k, n, m;
    cin >> k >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int x = 0, y = 0;
    vector<int> ans;
    for (int z = 0; z < n + m; z++)
    {
        if (x < n && a[x] == 0)
        {
            ans.push_back(0);
            x++;
            k++;
        }
        else if (y < m && b[y] == 0)
        {
            ans.push_back(0);
            y++;
            k++;
        }
        else if (y == m || (x < n && a[x] < b[y]))
        {
            if (a[x] > k)
            {
                cout << "-1\n";
                return;
            }
            ans.push_back(a[x++]);
        }
        else
        {
            if (b[y] > k)
            {
                cout << "-1\n";
                return;
            }
            ans.push_back(b[y++]);
        }
    }
    for (int i : ans)
    {
        cout << i << " ";
    }
    cout << "\n";
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
/**
 *        Bismillahir Rahmanir Rahim
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 19/09/2023 09:45:56
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

    int n, k, x;

    cin >> n >> k >> x;

    vi v;

    for (int i = 0; i < n; i++)
    {
        if (i == k)
        {
            for (int j = 0; j < (n - i); j++)
            {
                if (x == k)
                {
                    v.push_back(x - 1);
                }
                else
                {
                    v.push_back(x);
                }
            }
            break;
        }
        else
        {
            v.push_back(i);
        }
    }

    int sum(0);

    if (n < k)
    {
        cout << -1 << endl;
        return;
    }

    for (int i = 0; i < v.size(); ++i)
    {
        if (v[i] > x)
        {
            cout << -1 << endl;
            return;
        }
        sum += v[i];
    }

    cout << sum << endl;

    debug(v);
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
/**
 *        Bismillahir Rahmanir Rahim
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 10/09/2023 00:15:54
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
    ll n;
    cin >> n;

    vi v;

    int cnt(0);

    while (n > 0)
    {
        int x = n % 10;
        v.push_back(x);
        n /= 10;
        cnt++;
    }

    reverse(v.begin(), v.end());

    int tmp = v[0];

    for (int i = 0; i < cnt; ++i)
    {
        int r = 9 - v[i];

        if (v[i] > r)
        {
            v[i] = r;
        }
    }

    if (v[0] == 0)
    {
        v[0] = tmp;
    }

    for (int i = 0; i < cnt; ++i)
    {
        cout << v[i];
    }
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
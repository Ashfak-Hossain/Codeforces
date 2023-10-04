/**
 *        Bismillahir Rahmanir Rahim
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 04/10/2023 12:55:17
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
    int n;
    cin >> n;

    vi a(n), b(n);

    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;

    int s = 0;

    for (int i = 0; i < n; ++i)
    {
        s += a[i] - b[i];
    }

    if (s != 0)
    {
        cout << -1 << endl;
    }
    else
    {
        vector<int> v1, v2;

        for (int i = 0; i < n; ++i)
        {
            if (a[i] < b[i])
            {
                for (int j = 0; j < b[i] - a[i]; ++j)
                    v1.push_back(i + 1);
            }
            else if (a[i] > b[i])
            {
                for (int j = 0; j < a[i] - b[i]; ++j)
                    v2.push_back(i + 1);
            }
        }

        cout << v1.size() << endl;

        for (int i = 0; i < size(v1); ++i)
        {
            cout << v2[i] << " " << v1[i] << endl;
        }
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
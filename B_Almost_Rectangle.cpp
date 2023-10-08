/**
 *        Bismillahir Rahmanir Rahim
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 08/10/2023 13:07:14
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
    vector<vector<char>> vec(n, vector<char>(n));
    vector<pair<int, int>> pos;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < sz(s); j++)
        {
            vec[i][j] = s[j];
            if (s[j] == '*')
                pos.push_back({i, j});
        }
    }
    if (pos[0].first == pos[1].first)
    {
        if (pos[0].first == 0)
        {
            vec[pos[0].first + 1][pos[0].second] = '*';
            vec[pos[1].first + 1][pos[1].second] = '*';
        }
        else
        {
            vec[pos[0].first - 1][pos[0].second] = '*';
            vec[pos[1].first - 1][pos[1].second] = '*';
        }
    }
    else if (pos[0].second == pos[1].second)
    {
        if (pos[0].second == 0)
        {
            vec[pos[0].first][pos[0].second + 1] = '*';
            vec[pos[1].first][pos[1].second + 1] = '*';
        }
        else
        {
            vec[pos[0].first][pos[0].second - 1] = '*';
            vec[pos[1].first][pos[1].second - 1] = '*';
        }
    }
    else
    {
        vec[pos[0].first][pos[1].second] = '*';
        vec[pos[1].first][pos[0].second] = '*';
    }
    for (auto x : vec)
    {
        for (auto y : x)
            cout << y;
        cout << endl;
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
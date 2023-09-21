/**
 *        Bismillahir Rahmanir Rahim
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
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

    vector<vector<char>> v(10, vector<char>(10, 0));

    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j < 10; ++j)
        {
            cin >> v[i][j];
        }
    }

    int point(0);

    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j < 10; ++j)
        {
            if (v[i][j] != '.')
            {
                if (i == 0 || i == 9)
                {
                    point += 1;
                    continue;
                }

                if (i == 1 || i == 8)
                {
                    if (j == 0 || j == 9)
                    {
                        point += 1;
                        continue;
                    }

                    point += 2;
                    continue;
                }

                if (i == 2 || i == 7)
                {

                    if (j == 0 || j == 9)
                    {
                        point += 1;
                        continue;
                    }

                    if (j == 1 || j == 8)
                    {
                        point += 2;
                        continue;
                    }

                    point += 3;
                    continue;
                }

                if (i == 3 || i == 6)
                {

                    if (j == 0 || j == 9)
                    {
                        point += 1;
                        continue;
                    }

                    if (j == 1 || j == 8)
                    {
                        point += 2;
                        continue;
                    }

                    if (j == 2 || j == 7)
                    {
                        point += 3;
                        continue;
                    }

                    point += 4;
                    continue;
                }

                if (i == 4 || i == 5)
                {

                    if (j == 0 || j == 9)
                    {
                        point += 1;
                        continue;
                    }

                    if (j == 1 || j == 8)
                    {
                        point += 2;
                        continue;
                    }

                    if (j == 2 || j == 7)
                    {
                        point += 3;
                        continue;
                    }

                    if (j == 3 || j == 6)
                    {
                        point += 4;
                        continue;
                    }

                    point += 5;
                    continue;
                }
            }
        }
    }

    cout << point << endl;
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
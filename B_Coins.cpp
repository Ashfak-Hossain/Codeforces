/**
 *        Bismillahir Rahmanir Rahim
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 27/09/2023 23:26:21
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
    map<char, int> mp;

    mp.insert({'A', 0});
    mp.insert({'B', 0});
    mp.insert({'C', 0});

    int t = 3;
    while (t--)
    {
        cin >> s;

        if (s[1] == '>')
        {
            mp[s[0]]++;
        }
        else
        {
            mp[s[2]]++;
        }
    }

    if (mp['A'] == 1 && mp['B'] == 1 && mp['C'] == 1)
    {
        cout << "Impossible" << endl;
    }
    else
    {
        if (mp['A'] == 0)
        {
            cout << "A";
        }
        if (mp['B'] == 0)
        {
            cout << "B";
        }
        if (mp['C'] == 0)
        {
            cout << "C";
        }
        if (mp['A'] == 1)
        {
            cout << "A";
        }
        if (mp['B'] == 1)
        {
            cout << "B";
        }
        if (mp['C'] == 1)
        {
            cout << "C";
        }
        if (mp['A'] == 2)
        {
            cout << "A";
        }
        if (mp['B'] == 2)
        {
            cout << "B";
        }
        if (mp['C'] == 2)
        {
            cout << "C";
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
    solve();

    return 0;
}
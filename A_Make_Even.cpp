/**
 *        Bismillahir Rahmanir Rahim
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 21/09/2023 14:48:53
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

    string n;
    cin >> n;

    if ((n.back() - '0') % 2 == 0)
    {
        cout << "0" << endl;
        return;
    }

    if ((n[0] - '0') % 2 == 0)
    {
        cout << "1" << endl;
        return;
    }

    int two = count(n.begin(), n.end(), '2');
    int four = count(n.begin(), n.end(), '4');
    int six = count(n.begin(), n.end(), '6');
    int eight = count(n.begin(), n.end(), '8');

    if (two > 0 || four > 0 || six > 0 || eight > 0)
    {
        cout << "2" << endl;
        return;
    }
    cout << "-1" << endl;
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
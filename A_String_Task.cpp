/**
 *        Bismillahir Rahmanir Rahim
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 08/07/2023 22:50:40
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

bool isVowel(char c)
{
    c = tolower(c);
    return c == 'a' || c == 'o' || c == 'y' || c == 'e' || c == 'u' || c == 'i';
}

string addDots(string input)
{
    string output;
    for (char c : input)
    {
        output += '.';
        output += c;
    }
    return output;
}

string removeVowels(string input)
{
    string output;
    for (char c : input)
    {
        if (!isVowel(c))
        {
            output += c;
        }
    }
    return output;
}

void solve()
{

    string s;

    cin >> s;

    for (int i = 0; i < s.length(); ++i)
    {

        s[i] = tolower(s[i]);
    }

    string ans = removeVowels(s);

    string ans2 = addDots(ans);

    cout << ans2 << endl;
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

    int _(1);
    // cin >> _;
    while (_--)
        solve();

    return 0;
}
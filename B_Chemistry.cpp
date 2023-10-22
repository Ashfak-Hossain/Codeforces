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
#define Muichiro                          \
    {                                     \
        ios_base::sync_with_stdio(false); \
    }
#define Tokito          \
    {                   \
        cin.tie(NULL);  \
        cout.tie(NULL); \
    }

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

bool canFormPalindrome(string s, int k, int n)
{
    unordered_map<char, int> freq;
    for (char c : s)
    {
        freq[c]++;
    }

    int oddCount = 0;
    for (auto it : freq)
    {
        if (it.second % 2 != 0)
        {
            oddCount++;
        }
    }

    debug(freq);
    debug(oddCount);

    if (n < k)
    {
        return false; // Impossible to remove k characters from the string
    }

    if (oddCount - k == 1)
    {
        return true;
    }

    if (oddCount > k)
    {
        return false; // Impossible to form a palindrome even after removing k characters
    }

    return true;
}

void solve()
{

    int n, k;

    cin >> n >> k;
    string s;
    cin >> s;

    if (n - k == 1)
    {
        cout << "YES" << endl;
        return;
    }

    if (canFormPalindrome(s, k, n))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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
        solve();

    return 0;
}
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

// bool isPrime (ll n){

//     if (n <= 1) return false;

//     if (n <= 3) return true;

//     if (n % 2 == 0 || n % 3 == 0) return false;

//     for (ll i = 5; i <= sqrt(n); i += 6)
//     {
//         if(n % i == 0 || n % (i + 2) == 0) return false;
//     }

//     return true;
// }

ll mulmod(ll a, ll b, ll mod)
{
    ll res = 0;
    a = a % mod;
    while (b > 0)
    {
        if (b % 2 == 1)
            res = (res + a) % mod;
        a = (a * 2) % mod;
        b /= 2;
    }
    return res % mod;
}

ll power(ll a, ll n, ll mod)
{
    ll res = 1;
    while (n)
    {
        if (n & 1)
        {
            res = mulmod(res, a, mod);
        }
        a = mulmod(a, a, mod);
        n >>= 1;
    }
    return res;
}

bool millerRabin(ll d, ll n)
{
    ll a = 2 + rand() % (n - 4);
    ll x = power(a, d, n);

    if (x == 1 || x == n - 1)
        return true;

    while (d != n - 1)
    {
        x = mulmod(x, x, n);
        d *= 2;

        if (x == 1)
            return false;
        if (x == n - 1)
            return true;
    }

    return false;
}

bool isPrime(ll n, int k = 5)
{
    if (n <= 1 || n == 4)
        return false;
    if (n <= 3)
        return true;

    ll d = n - 1;
    while (d % 2 == 0)
        d /= 2;

    for (int i = 0; i < k; i++)
    {
        if (!millerRabin(d, n))
            return false;
    }
    return true;
}

ll smallestPrimeFactor(ll n)
{
    if (n <= 1)
        return 1;

    if (n % 2 == 0)
        return 2;

    for (ll i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            return i;
        }
    }

    return n;
}

void solve()
{
    ll n;
    cin >> n;

    // if (n < 24 || isPrime(n))
    // {
    //     cout << "NO" << endl;
    //     return;
    // }

    vector<ll> ans;

    ans.push_back(smallestPrimeFactor(n));

    n /= ans[0];

    for (ll i = ans[0] + 1; i * i < n; ++i)
    {
        if (n % i == 0)
        {
            ans.push_back(i);
            n /= i;
            ans.push_back(n);
            break;
        }
    }

    debug(ans);

    if (ans.size() < 3 || (ans[0] == ans[1] || ans[0] == ans[2] || ans[1] == ans[2]))
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;

    for (auto &i : ans)
    {
        cout << i << " ";
    }

    cout << endl;
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
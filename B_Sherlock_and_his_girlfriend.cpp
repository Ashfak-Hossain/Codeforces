/**
 *        Bismillahir Rahmanir Rahim
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 22/10/2023 23:20:07
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

vector<bool> isPrime(MAX_N);

vector<int> prime;

void sieve(int n)
{
    isPrime[0] = isPrime[1] = 0;

    isPrime[2] = 1;

    for (int i = 3; i <= n; i += 2)
        isPrime[i] = 1;

    for (int i = 3; i * i <= n; i += 2)
        if (isPrime[i])
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = 0;
}

void solve()
{
    int n;

    cin >> n;

    cout << ((n <= 2) ? 1 : 2) << endl;

    for (int i = 2; i <= n + 1; i++)
    {
        debug(i);
        if (isPrime[i])
            cout << 1 << " ";
        else
            cout << 2 << " ";
        }

    cout << endl;
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
/**
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 25/04/2023 00:50:54
 **/
#include <bits/stdc++.h>

#define rep(i, L, R) for (int i = L; i < R; i++)
#define rep1(i, L, R) for (int i = L; i <= R; i++)
#define rrep(i, L, R) for (int i = L; i > R; i--)
#define rrep1(i, L, R) for (int i = L; i >= R; i--)
#define range(a, b) for (auto &(a) : (b))
#define all(x) (x).begin(), (x).end()
#define sz(x) int(x.size())
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define char2Int(c) (c - '0')
#define lastEle(vec) vec[vec.size() - 1]
#define PI 3.1415926535897932384626433832795l

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

string to_upper(string a)
{
    for (int i = 0; i < (int)a.size(); ++i)
        if (a[i] >= 'a' && a[i] <= 'z')
            a[i] -= 'a' - 'A';
    return a;
}
string to_lower(string a)
{
    for (int i = 0; i < (int)a.size(); ++i)
        if (a[i] >= 'A' && a[i] <= 'Z')
            a[i] += 'a' - 'A';
    return a;
}
bool prime(ll a)
{
    if (a == 1)
        return 0;
    for (int i = 2; i <= round(sqrt(a)); ++i)
        if (a % i == 0)
            return 0;
    return 1;
}

/* Debug Code */
void __print(int x) { cerr << x; }
void __print(long x) { cerr << x; }
void __print(long long x) { cerr << x; }
void __print(unsigned x) { cerr << x; }
void __print(unsigned long x) { cerr << x; }
void __print(unsigned long long x) { cerr << x; }
void __print(float x) { cerr << x; }
void __print(double x) { cerr << x; }
void __print(long double x) { cerr << x; }
void __print(char x) { cerr << '\'' << x << '\''; }
void __print(const char *x) { cerr << '\"' << x << '\"'; }
void __print(const string &x) { cerr << '\"' << x << '\"'; }
void __print(bool x) { cerr << (x ? "true" : "false"); }
template <typename A>
void __print(const A &x);
template <typename A, typename B>
void __print(const pair<A, B> &p);
template <typename... A>
void __print(const tuple<A...> &t);
template <typename T>
void __print(stack<T> s);
template <typename T>
void __print(queue<T> q);
template <typename T, typename... U>
void __print(priority_queue<T, U...> q);
template <typename A>
void __print(const A &x)
{
    bool first = true;
    cerr << '{';
    for (const auto &i : x)
    {
        cerr << (first ? "" : ","), __print(i);
        first = false;
    }
    cerr << '}';
}
template <typename A, typename B>
void __print(const pair<A, B> &p)
{
    cerr << '(';
    __print(p.first);
    cerr << ',';
    __print(p.second);
    cerr << ')';
}
template <typename... A>
void __print(const tuple<A...> &t)
{
    bool first = true;
    cerr << '(';
    apply([&first](const auto &...args)
          { ((cerr << (first ? "" : ","), __print(args), first = false), ...); },
          t);
    cerr << ')';
}
template <typename T>
void __print(stack<T> s)
{
    vector<T> debugVector;
    while (!s.empty())
    {
        T t = s.top();
        debugVector.push_back(t);
        s.pop();
    }
    reverse(debugVector.begin(), debugVector.end());
    __print(debugVector);
}
template <typename T>
void __print(queue<T> q)
{
    vector<T> debugVector;
    while (!q.empty())
    {
        T t = q.front();
        debugVector.push_back(t);
        q.pop();
    }
    __print(debugVector);
}
template <typename T, typename... U>
void __print(priority_queue<T, U...> q)
{
    vector<T> debugVector;
    while (!q.empty())
    {
        T t = q.top();
        debugVector.push_back(t);
        q.pop();
    }
    __print(debugVector);
}
void _print() { cerr << "]\n"; }
template <typename Head, typename... Tail>
void _print(const Head &H, const Tail &...T)
{
    __print(H);
    if (sizeof...(T))
        cerr << ", ";
    _print(T...);
}
#ifndef ONLINE_JUDGE
#define debug(x...)               \
    cerr << "[" << #x << "] = ["; \
    _print(x)
#else
#define debug(x...)
#endif

void solve()
{
    ll t;
    cin >> t;

    while (t--)
    {

        ll n;
        cin >> n;

        ll a[n];

        rep(i, 0, n)
        {

            cin >> a[i];
            debug(a[i]);
        }

        sort(a, a + n);

        cout << max(a[0] * a[1], a[n - 1] * a[n - 2]) << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    /*#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("error.txt", "w", stderr);
        freopen("output.txt", "w", stdout);
    #endif*/

    // int tc;
    // cin >> tc;
    // rep1(t, 1, tc){
    // cout << "Case #" << t << ": ";

    solve();

    //}

    // cerr << "Time elapsed : " << (float)clock() / CLOCKS_PER_SEC << " s" << endl;

    return 0;
}
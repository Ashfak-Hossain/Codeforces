#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

typedef long long ll;

ll find(ll x)
{
    ll mi = INT_MAX;
    ll mx = INT_MIN;
    while (x > 0)
    {
        ll rem = x % 10;
        mi = min(mi, rem);
        mx = max(mx, rem);
        x /= 10;
    }
    return mx - mi;
}

void solve()
{
    ll X, Y;
    cin >> X >> Y;

    ll ans = X;
    for (ll i = X; i <= min(X + 100, Y); i++)
    {
        if (find(i) > find(ans))
        {
            ans = i;
        }
    }
    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
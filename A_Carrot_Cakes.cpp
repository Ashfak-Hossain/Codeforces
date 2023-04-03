#include <bits/stdc++.h>

using namespace std;

#define ll long long

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    ll n(8), t(6), k(4), d(5);

    // cin >> n >> t >> k >> d;

    // ll t1 = t * ((n / k) + (n % k != 0));
    // ll t2 = d + t * ((n - (d / t) * k) / (2 * k) + ((n - (d / t) * k) % (2 * k) != 0));

    ll x = ceil((double)d / t);
    n = n - (x * k);
    if (n > 0)
    {
        if (d % t != 0)
            cout << "YES" << endl;
        else
        {
            if (n > k)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

#define ll long long

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    ll n, b, d;
    cin >> n >> b >> d;
    ll waste(0), count(0);

    for (int j = 0; j < n; j++)
    {
        int x;
        cin >> x;

        if (x <= b)
        {
            waste += x;
        }

        if (waste > d)
        {
            count++;
            waste = 0;
        }
    }

    cout << count << endl;

    return 0;
}
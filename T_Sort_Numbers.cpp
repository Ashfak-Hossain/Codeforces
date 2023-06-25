/**
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 25/06/2023 15:28:35
 **/
#include <bits/stdc++.h>

#define rep(i, L, R) for (int i = L; i < R; i++)
#define all(x) (x).begin(), (x).end()

using namespace std;

typedef vector<int> vi;

int main()
{
    vi v(3);

    vi v2 = v;

    rep(i, 0, 3)
    {
        cin >> v[i];
        v2[i] = v[i];
    }

    sort(all(v));

    rep(i, 0, 3)
    {
        cout << v[i] << endl;
    }

    cout << endl;

    rep(i, 0, 3)
    {
        cout << v2[i] << endl;
    }

    return 0;
}
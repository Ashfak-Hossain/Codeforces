/**
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 29/06/2023 00:49:09
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long x, y, z, mn;
    cin >> x >> y >> z;

    mn = min(x, min(y, z));
    x = x - mn;
    z = z - mn;

    if (x / 2 >= z)
        cout << z + mn << endl;
    else
        cout << x / 2 + mn << endl;
    return 0;
}
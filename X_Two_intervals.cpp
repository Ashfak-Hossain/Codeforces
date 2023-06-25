/**
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 25/06/2023 16:07:48
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    if (max(a, c) > min(b, d))
    {
        cout << -1 << endl;
    }
    else
    {
        cout << max(a, c) << " " << min(b, d) << endl;
    }

    return 0;
}
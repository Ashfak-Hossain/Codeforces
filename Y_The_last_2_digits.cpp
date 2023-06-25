/**
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 25/06/2023 18:10:25
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long a, b, c, d, m;

    cin >> a >> b >> c >> d;

    a %= 100;
    b %= 100;
    c %= 100;
    d %= 100;

    m = (a * b * c * d) % 100;

    if (m < 10)
    {
        cout << 0 << m;
    }
    else
    {
        cout << m;
    }

    return 0;
}
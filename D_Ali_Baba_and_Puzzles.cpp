/**
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 27/06/2023 09:14:28
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a, b, c;
    unsigned long long d;

    cin >> a >> b >> c >> d;

    if (a + b - c == d)
    {
        cout << "YES" << endl;
    }
    else if (a - b + c == d)
    {
        cout << "YES" << endl;
    }
    else if (a + (b * c) == d)
    {
        cout << "YES" << endl;
    }
    else if ((a * b) + c == d)
    {
        cout << "YES" << endl;
    }
    else if ((a * b) - c == d)
    {
        cout << "YES" << endl;
    }
    else if (a - (b * c) == d)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
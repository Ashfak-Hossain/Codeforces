/**
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 27/06/2023 10:41:37
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a == 0 && b == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        if (a - b > 1 || b - a > 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
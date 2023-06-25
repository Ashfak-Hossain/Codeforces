/**
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 25/06/2023 15:50:37
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a, b, c;

    char x, y;

    cin >> a >> x >> b >> y >> c;

    if (x == '+' && (a + b) == c)
    {
        cout << "Yes" << endl;
    }
    else if (x == '-' && (a - b) == c)
    {
        cout << "Yes" << endl;
    }
    else if (x == '*' && (a * b) == c)
    {
        cout << "Yes" << endl;
    }
    else
    {
        if (x == '+')
        {
            cout << a + b << endl;
        }
        else if (x == '-')
        {
            cout << a - b << endl;
        }
        else if (x == '*')
        {
            cout << a * b << endl;
        }
    }

    return 0;
}
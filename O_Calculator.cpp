/**
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 22/06/2023 22:28:50
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a, b;
    char c;

    cin >> a >> c >> b;

    if (c == '+')
    {
        cout << a + b << endl;
    }
    else if (c == '-')
    {
        cout << a - b << endl;
    }
    else if (c == '*')
    {
        cout << a * b << endl;
    }
    else if (c == '/')
    {
        cout << a / b << endl;
    }

    return 0;
}
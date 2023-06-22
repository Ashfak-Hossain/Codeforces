/**
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 22/06/2023 22:22:22
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    char x;

    cin >> x;

    if (x >= 65 && x <= 90)
    {
        cout << char(x + 32) << endl;
    }
    else
    {
        cout << char(x - 32) << endl;
    }

    return 0;
}
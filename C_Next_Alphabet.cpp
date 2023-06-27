/**
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 27/06/2023 09:02:47
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{

    char a;

    cin >> a;

    if (a == 'z')
    {
        cout << 'a' << endl;
    }
    else
    {
        cout << char(a + 1) << endl;
    }

    return 0;
}
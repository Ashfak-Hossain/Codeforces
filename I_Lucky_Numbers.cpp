/**
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 29/06/2023 15:14:15
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    
    cin >> a;

    int b = a % 10;

    int c = a / 10;

    if (b % c == 0 || c % b == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
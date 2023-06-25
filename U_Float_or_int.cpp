/**
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 25/06/2023 15:29:55
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n;

    cin >> n;

    if (floor(n) == ceil(n))
    {
        cout << "int " << n << endl;
    }
    else
    {
        cout << "float " << int(n) << " " << (n - int(n)) << endl;
    }

    return 0;
}
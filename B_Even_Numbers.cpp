/**
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 29/06/2023 18:40:09
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            cout << i << endl;
    }

    if (n == 1)
        cout << -1 << endl;

    return 0;
}
/**
 *        Bismillahir Rahmanir Rahim
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 05/07/2023 12:36:47
 **/
#include <bits/stdc++.h>

using namespace std;

bool isl(int n)
{
    while (n > 0)
    {
        int digit = n % 10;
        if (digit != 4 && digit != 7)
        {
            return false;
        }

        n /= 10;
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b;

    cin >> a >> b;

    bool c = false;

    for (int i = a; i <= b; i++)
    {
        if (isl(i))
        {
            cout << i << " ";

            c = true;
        }
    }

    if (!c)
    {
        cout << -1 << endl;
    }

    cout << endl;

    return 0;
}
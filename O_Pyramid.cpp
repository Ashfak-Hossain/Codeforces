/**
 *        Bismillahir Rahmanir Rahim
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 05/07/2023 13:29:45
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
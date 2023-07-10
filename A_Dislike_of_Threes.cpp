/**
 *        Bismillahir Rahmanir Rahim
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 10/07/2023 22:13:10
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int arr[1001];

    int j = 1;

    for (size_t i = 0; i <= 1666; i++)
    {
        if (i % 3 != 0)
        {
            if (i % 10 != 3)
            {
                arr[j] = i;
                j++;
            }
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;

        cin >> n;

        cout << arr[n] << endl;
    }

    return 0;
}
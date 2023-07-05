/**
 *        Bismillahir Rahmanir Rahim
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 05/07/2023 13:19:34
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    char c;

    int n;

    cin >> c >> n;

    int arr[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < arr[i]; j++)
            cout << c;
        cout << endl;
    }
    return 0;
}
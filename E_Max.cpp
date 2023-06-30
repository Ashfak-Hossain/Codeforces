/**
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 30/06/2023 15:07:18
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int x, n, max(0);

    cin >> x;

    for (int i = 0; i < x; ++i)
    {
        cin >> n;
        if (n > max)
            max = n;
    }

    cout << max << endl;

    return 0;
}
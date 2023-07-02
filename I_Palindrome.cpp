/**
 *        Bismillahir Rahmanir Rahim
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 01/07/2023 17:08:02
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, m(0);

    cin >> n;

    int t = n;

    while (n != 0)
    {
        int digit = n % 10;
        m = m * 10 + digit;
        n /= 10;
    }

    cout << m << endl;

    cout << (m == t ? "YES" : "NO") << endl;

    return 0;
}
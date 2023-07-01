/**
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 01/07/2023 09:44:11
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    long long n;
    cin >> n;

    if (n == 1)
    {
        cout << "NO" << endl;
        return 0;
    }

    for (size_t i = 2; i <= round(sqrt(n)); i++)
        if (n % i == 0)
        {
            cout << "NO" << endl;
            return 0;
        }
    cout << "YES" << endl;

    return 0;
}
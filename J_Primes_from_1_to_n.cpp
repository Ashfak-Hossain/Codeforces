/**
 *        Bismillahir Rahmanir Rahim
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 02/07/2023 10:10:57
 **/
#include <bits/stdc++.h>

using namespace std;

bool prime(long long a)
{
    if (a == 1)
        return 0;

    for (size_t i = 2; i <= round(sqrt(a)); i++)
        if (a % i == 0)
            return 0;

    return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    long long k;

    cin >> k;

    for (long long i = 1; i <= k; ++i)
    {
        if (prime(i))
            cout << i << " ";
    }

    return 0;
}
/**
 *        Bismillahir Rahmanir Rahim
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 01/12/2023 23:31:44
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, m, a;

    cin >> n >> m >> a;

    long long ans = ((m + a - 1) / a) * ((n + a - 1) / a);

    cout << ans << endl;

    return 0;
}
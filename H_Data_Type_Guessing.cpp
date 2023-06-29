/**
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 29/06/2023 14:48:46
 **/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    long double n, k, a;

    cin >> n >> k >> a;

    long long x = (n * k) / a;

    double q = (k * n) / a, test = q - x;

    if (test > 0)
    {
        cout << "double" << endl;
    }
    else if (q > 2147483647)
    {
        cout << "long long" << endl;
    }
    else
    {
        cout << "int" << endl;
    }

    return 0;
}
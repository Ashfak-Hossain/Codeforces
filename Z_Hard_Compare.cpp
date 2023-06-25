/**
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 25/06/2023 18:26:18
 **/
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

int main()
{
    ull a, b, c, d;

    cin >> a >> b >> c >> d;

    b *log(a) - d *log(c) > 0 ? cout << "YES" : cout << "NO";

    cout << endl;

    return 0;
}
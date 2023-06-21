/**
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 21/06/2023 21:29:32
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long double r;

    long double pi = 3.141592653;

    cin >> r;

    long double area = pi * pow(r, 2);

    cout << fixed << setprecision(9) << area << endl;

    return 0;
}
/**
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 21/06/2023 21:50:37
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a, b;

    cin >> a >> b;

    cout << "floor " << a << " / " << b << " = " << floor(double(a / b)) << endl;
    cout << "ceil " << a << " / " << b << " = " << ceil(double(a / b)) << endl;
    cout << "round " << a << " / " << b << " = " << round(double(a / b)) << endl;

    return 0;
}
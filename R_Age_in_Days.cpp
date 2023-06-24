/**
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 24/06/2023 10:10:24
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    cout << (n / 365) << " years" << endl;

    cout << (n % 365) / 30 << " months" << endl;

    cout << (n % 365) % 30 << " days" << endl;

    return 0;
}
/**
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 21/06/2023 22:17:46
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    if (A % B == 0 || B % A == 0)
    {
        cout << "Multiples" << endl;
    }
    else
    {
        cout << "No Multiples" << endl;
    }

    return 0;
}
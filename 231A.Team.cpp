#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here

    int n, Petya, Vasya, Tonya, number(0);
    cin >> n;
    while (n--)
    {
        cin >> Petya >> Vasya >> Tonya;
        if (Petya + Vasya + Tonya >= 2)
        {
            number += 1;
        }
    }
    cout << number << endl;

    return 0;
}
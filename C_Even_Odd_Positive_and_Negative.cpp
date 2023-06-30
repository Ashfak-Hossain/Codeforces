/**
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 30/06/2023 12:04:34
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int x;
    cin >> x;
    int odd(0), even(0), pos(0), neg(0);

    for (size_t i = 0; i < x; i++)
    {

        int n;

        cin >> n;

        if (abs(n) % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        if (n < 0)
        {
            neg++;
        }
        else if (n > 0)
        {
            pos++;
        }
    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;

    return 0;
}
/**
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 22/06/2023 21:49:12
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{

    char x;
    cin >> x;

    if (isdigit(x))
    {
        cout << "IS DIGIT" << endl;
    }
    else
    {
        if (isalpha(x))
        {
            cout << "ALPHA" << endl;
        }
        if (isupper(x))
        {
            cout << "IS CAPITAL" << endl;
        }
        else
        {
            cout << "IS SMALL" << endl;
        }
    }

    return 0;
}
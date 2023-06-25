/**
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 25/06/2023 15:43:51
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    char c;

    cin >> a >> c >> b;

    if (c == '<' && (a < b))
    {
        cout << "Right" << endl;
    }
    else if (c == '>' && (a > b))
    {
        cout << "Right" << endl;
    }
    else if (c == '=' && (a == b))
    {
        cout << "Right" << endl;
    }
    else
    {
        cout << "Wrong" << endl;
    }

    return 0;
}
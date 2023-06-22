/**
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 22/06/2023 21:20:40
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    int minNum = min({a, b, c});

    int maxNum = max({a, b, c});

    cout << minNum << " " << maxNum << endl;

    return 0;
}
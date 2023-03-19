#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here

    int x, y, z(0);
    cin >> x >> y;

    for (int i = 0; i < 10; i++)
    {
        x = x * 3;
        y = y * 2;
        z++;
        if (x > y)
        {
            cout << z;
            break;
        }
    }

    return 0;
}
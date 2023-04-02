#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int k, r;
    cin >> k >> r;

    for (int i = 1; i <= 9; i++)
    {
        if (((k * i) % 10 == r) || ((k * i) % 10 == 0))
        {
            cout << i;
            break;
        }
    }

    return 0;
}
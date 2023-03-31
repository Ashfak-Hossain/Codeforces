#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n;
    cin >> n;
    int police = 0;
    int crime = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x > 0)
        {
            police += x;
        }
        else
        {
            if (police < 1)
            {
                ++crime;
            }
            else
            {
                --police;
            }
        }
    }
    cout << crime;

    return 0;
}
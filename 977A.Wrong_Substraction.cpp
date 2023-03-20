#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here

    int n, k;
    cin >> n >> k;

    for (size_t i = 0; i < k; i++)
    {
        if (n % 10 == 0)
        {
            n /= 10;
        }
        else
        {
            n -= 1;
        }
    }

    cout << n << endl;

    return 0;
}
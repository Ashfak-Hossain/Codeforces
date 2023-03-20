#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here

    int n;
    cin >> n;

    int arr[n][2];

    int count(0), high(0);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        count = count + arr[i][1] - arr[i][0];
        if (high < count)
        {
            high = count;
        }
    }

    cout << high << endl;

    return 0;
}

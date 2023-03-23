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

    int free(0);

    for (int k = 0; k < n; k++)
    {
        for (int l = 0; l < 2; l++)
        {

            cin >> arr[k][l];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i][1] - arr[i][0] >= 2)
        {
            free++;
        }
    }

    cout << free << endl;

    return 0;
}
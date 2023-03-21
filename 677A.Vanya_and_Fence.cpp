#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here

    int n, h;

    int width(0);

    cin >> n >> h;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int j = 0; j < n; j++)
    {
        if (arr[j] <= h)
        {
            width++;
        }
        else
        {
            width += 2;
        }
    }
    cout << width << endl;

    return 0;
}
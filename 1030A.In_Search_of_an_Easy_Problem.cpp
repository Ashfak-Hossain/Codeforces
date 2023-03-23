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

    int x = 0;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int j = 0; j < n; j++)
    {
        x += arr[j];
    }

    if (x > 0)
    {
        cout << "HARD";
    }
    else
    {
        cout << "EASY";
    }

    return 0;
}
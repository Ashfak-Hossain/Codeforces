#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here

    int n, k, a[100], count = 0;

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (size_t i = 0; i < n; i++)
    {
        if (a[i] > 0 && a[i] >= a[k - 1])
            count++;
    }

    cout << count << endl;

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int arr[250];

    int n;
    cin >> n;
    int p, q;

    cin >> p;
    for (int i = 0; i < p; i++)
    {
        cin >> arr[i];
    }

    cin >> q;
    for (int i = p; i < p + q; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + (p + q));

    int count(0);
    for (int i = 0; i < p + q; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            count++;
        }
    }

    if (n == (count))
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}
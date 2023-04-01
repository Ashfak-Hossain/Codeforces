#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n;
    cin >> n;

    int number(0);

    vector<int> h(n), a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> h[i] >> a[i];

        for (int j = 0; j < i; j++)
        {
            if (h[i] == a[j])
            {
                number += 1;
            }
            if (a[i] == h[j])
            {
                number += 1;
            }
        }
    }

    cout << number << endl;

    return 0;
}
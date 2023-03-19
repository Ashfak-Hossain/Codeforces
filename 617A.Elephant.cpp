#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here

    int x, step = 0;
    int a[] = {5, 4, 3, 2, 1};

    cin >> x;

    for (int i = 0; i < 5; i++)
    {
        step += x / a[i];

        x = x % a[i];
    }
    cout << step << endl;

    return 0;
}
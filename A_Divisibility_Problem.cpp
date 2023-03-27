#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t;
    long long int a, b;
    cin >> t;
    while (t--)
    {
        int div = 0, pls = 0;
        cin >> a >> b;
        if (a % b == 0)
        {
            cout << 0 << endl;
            continue;
        }
        div = a / b;
        pls = (div + 1) * b;
        cout << pls - a << endl;
    }

    return 0;
}
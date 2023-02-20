#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here

    int n, x(0);
    cin >> n;

    string s;

    while (n--)
    {
        cin >> s;

        if (s[1] == '+')
            ++x;
        else
            --x;
    }

    cout << x << endl;

    return 0;
}
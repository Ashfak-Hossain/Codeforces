#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here

    int x, y(0);
    cin >> x;

    string s;
    cin >> s;

    for (size_t i = 0; i < x; i++)
        if (s[i] == s[i + 1])
            y++;

    cout << y << endl;

    return 0;
}
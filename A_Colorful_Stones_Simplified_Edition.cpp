#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string s, t;
    cin >> s;
    cin >> t;

    size_t pos = 0;

    for (size_t i = 0; i < t.length(); i++)
    {
        if (t[i] == s[pos])
            pos += 1;
    }
    cout << pos + 1 << endl;

    return 0;
}
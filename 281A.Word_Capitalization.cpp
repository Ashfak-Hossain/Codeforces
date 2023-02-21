#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here

    string s;

    cin >> s;

    // for (size_t i = 0; i < s.size(); i++)
    // {
    if (s[0] >= 97 && s[0] <= 122)
    {
        s[0] = s[0] - 32;
        cout << s;
    }
    else
    {
        cout << s << endl;
    }

    // }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here

    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;

    while (t--)
    {

        for (int i = 1; i < n; i++)
        {
            if (s[i] == 'G' && s[i - 1] == 'B')
            {
                s[i] = 'B';
                s[i - 1] = 'G';
                ++i;
            }
        }
    }

    cout << s << endl;

    return 0;
}
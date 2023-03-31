#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    string s;
    cin >> s;

    int count = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            count += a;
        }
        else if (s[i] == '2')
        {
            count += b;
        }
        else if (s[i] == '3')
        {
            count += c;
        }
        else
        {
            count += d;
        }
    }
    cout << count << endl;
    return 0;
}

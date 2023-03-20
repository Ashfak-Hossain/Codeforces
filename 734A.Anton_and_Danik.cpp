#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here

    int n;
    cin >> n;

    string s;
    cin >> s;

    int a(0), d(0);

    for (size_t i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            a++;
        }
        else
        {
            d++;
        }
    }

    if (a > d)
    {
        cout << "Anton" << endl;
    }
    else if (a < d)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }

    return 0;
}
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

    char arr[s.size()];

    int upper = 0, lower = 0;

    for (size_t i = 0; i < s.size(); i++)
    {

        if (isupper(s[i]))
        {
            upper++;
        }
        else
        {
            lower++;
        }
    }

    if (upper > lower)
    {
        char ch;

        for (size_t j = 0; j < s.size(); j++)
        {
            char ch = toupper(s[j]);
            cout << ch;
        }
    }
    else
    {
        char ch;

        for (size_t k = 0; k < s.size(); k++)
        {
            char ch = tolower(s[k]);
            cout << ch;
        }
    }

    return 0;
}
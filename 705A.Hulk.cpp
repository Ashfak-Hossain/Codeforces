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

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
            s += "hate ";
        else if (i % 2 == 0)
            s += "that I love ";
        else
            s += "that I hate ";
    }
    cout << "I " << s << "it" << endl;
    return 0;
}
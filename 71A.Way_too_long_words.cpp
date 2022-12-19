#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here

    int cases;
    cin >> cases;

    for (size_t i = 0; i < cases; i++)
    {

        string words;
        cin >> words;

        int size = words.size(); // total letter of the word

        char first = words[0];
        char last = words[size - 1];

        if (size > 10)
        {
            cout << first << size - 2 << last << endl;
        }
        else
            cout << words << endl;
    }
    return 0;
}
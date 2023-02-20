#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here

    long long i;

    string first, second;

    while (cin >> first >> second)
    {
        long sum1(0), sum2(0);

        for (size_t i = 0; i < first.size(); i++)
        {
            if (first[i] >= 'A' && first[i] <= 'Z')
            {
                first[i] = first[i] - 'A' + 97;
            }
            if (second[i] >= 'A' && second[i] <= 'Z')
            {
                second[i] = second[i] - 'A' + 97;
            }
        }
        for (size_t i = 0; i < second.size(); i++)
        {
            if (first[i] > second[i])
            {
                cout << "1\n";
                return 0;
            }
            if (second[i] > first[i])
            {
                cout << "-1\n";
                return 0;
            }
        }
        cout << "0\n";
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here

    int arr[1001];
    string s;
    cin >> s;

    int count(0);

    for (size_t i = 0; i < s.size(); i++)
    {
        if (s[i] == '+')
            continue;
        else
            arr[count++] = s[i] - '0';
    }

    sort(arr, arr + count);
    for (size_t i = 0; i < count; i++)
    {
        cout << arr[i];
        if (i == count - 1)
            break;
        cout << '+';
    }

    return 0;
}
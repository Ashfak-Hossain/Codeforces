/**
 *        Bismillahir Rahmanir Rahim
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 04/07/2023 09:44:08
 **/
#include <bits/stdc++.h>

#define rep1(i, L, R) for (int i = L; i <= R; i++)

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n;
    cin >> n;

    rep1(i, 1, n) if (n % i == 0) cout << i << endl;

    return 0;
}
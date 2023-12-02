/**
 *        Bismillahir Rahmanir Rahim
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 *        Created: 02/12/2023 19:50:27
 **/
#include <bits/stdc++.h>

using namespace std;

long long sumOfFibonacci(int K)
{
    if (K <= 0)
    {
        return 0;
    }

    long long a = 1, b = 1, sum = a + b;

    for (int i = 3; i <= K; ++i)
    {
        long long c = a + b;
        sum += c;
        a = b;
        b = c;
    }

    return sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int sum = sumOfFibonacci(n);

    cout << sum << endl;

    return 0;
}
#include <bits/stdc++.h>

/****** SAAD A PEACEFUL SOUL ******/

using namespace std;
const int N = 1e5 + 7;
int dp[N];

// DP APPROACH TOP DOWN
int SubSequence(int m, int n, string s, string s2)
{
    int dp[m + 1][n + 1];
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            dp[i][j] = -1;
        }
    }
    if (m == 0 || n == 0)
        return 0;
    if (dp[m][n] != -1)
        return dp[m][n];
    if (s.at(m - 1) || s2.at(n - 1))
        return 1 + SubSequence(m - 1, n - 1, s, s2);
    else
        return max(SubSequence(m - 1, n, s, s2), SubSequence(m, n - 1, s, s2));
}

// DP APPROACH BOTTOM TOP
// int SubSequence(int m, int n, string s, string s2)
// {
//     int dp[m + 1][n + 1];//Created dp of 6 & 9
//     for (int i = 0; i <= m; i++)
//         for (int j = 0; j <= n; j++)
//             dp[i][j] = 0;//initialized dp to 0
//     for (int i = 1; i <= m; i++)
//         for (int j = 1; j <= n; j++)
//             if (s.at(i - 1) == s2.at(j - 1))
//                 dp[i][j] = dp[i - 1][j - 1] + 1;
//             else
//                 dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
//     return dp[m][n];
// }

// FIBONACCI OF N USING TOP DOWN APPROACH
// int fib(int n)
// {
//     if (n == 0 || n == 1)
//         return n;
//     if (dp[n] != -1)
//     {
//         return dp[n];
//     }
//     return dp[n] = fib(n - 1) + fib(n - 2);
// }
int main()
{
    string s = "sajid";
    string s2 = "sajidali";
    int n1 = s.length();
    int n2 = s2.length();
    memset(dp, -1, N);
    cout << SubSequence(n1, n2, s, s2);
    // long long n;
    // cin >> n;
    // cout << fib(n);
    return 0;
}

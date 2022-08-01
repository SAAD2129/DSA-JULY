#include <bits/stdc++.h>

/****** SAAD A PEACEFUL SOUL ******/

using namespace std;

int MaxProfit(int v[], int w[], int vl, int wl, int maxWeight)
{
    // cout << vl << " " << wl;
    int dp[vl + 1][maxWeight + 1]; // Created dp of 5 & 11
    for (int i = 0; i <= vl; i++)
        for (int j = 0; j <= wl; j++)
            dp[i][j] = 0; // initialized dp to 0

    for (int i = 1; i <= vl; i++)
        for (int j = 1; j <= wl; j++)
        {
            if (v[i]>=w[j] && maxWeight <maxWeight )     // s == s
            dp[i][j] = dp[i - 1][j - 1] + maxWeight; // dp 1 1 = 0 0 +1
                                             // else
            dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
        }
    return dp[vl][wl];
}

int main()
{
    int v[] = {20, 30, 10, 50};
    int w[] = {1, 3, 4, 6};
    int maxWeight = 10;
    int vLen = sizeof(v) / sizeof(int);
    int wLen = sizeof(w) / sizeof(int);
    cout<<MaxProfit(v, w, vLen, wLen, maxWeight);

    return 0;
}
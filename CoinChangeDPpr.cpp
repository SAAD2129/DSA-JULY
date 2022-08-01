// // BRUTE FORCE APPROACH HAVING COMPLEXITY OF O(m^n);
// #include <bits/stdc++.h>

// /****** SAAD A PEACEFUL SOUL ******/

// using namespace std;

// int minCoins(int a[], int n)
// {
//     int ans = INT_MAX;
//     if (n == 0)
//         return 0;
//     for (int i = 0; i < 3; i++)
//     {
//         if (n - a[i] >= 0)
//         {
//             int subAns = minCoins(a, n - a[i]); // 3
//             if (subAns != INT_MAX && (subAns + 1) < ans)
//             {
//                 ans = subAns + 1;
//             }
//         }
//     }
//     return ans;
// }
// int main()
// {

//     int num = 4;
//     // int arr[] = {7, 5, 1};
//     int arr[] = {1, 2, 3};
//     // n = 4, m = 3 S[] = {1, 2, 3};

//      cout << minCoins(arr, num);

//     return 0;
// }

// // USING DYNAMIC PROGRAMMING APPROACH HAVING COMPLEXITY OF O(m*n);
#include <bits/stdc++.h>

/****** SAAD A PEACEFUL SOUL ******/

using namespace std;

int minCoins(int a[], int n, int dp[])
{

    int ans = INT_MAX;
    if (n == 0)
        return 0;
    for (int i = 0; i < 4; i++) // 7 5 3
    {
        if (n - a[i] >= 0)
        {
            int subAns = 0;
            if (dp[n - a[i]] != -1)
            {
                subAns = dp[n - a[i]];
            }
            else
            {
                subAns = minCoins(a, n - a[i], dp);
            }
            if (subAns != INT_MAX && (subAns + 1) < ans)
            {
                ans = subAns + 1;
            }
        }
    }
    return ans;
}
int main()
{

    // int num = 18;
    // int arr[] = {7, 5, 1};
    // int num = 4;
    int n = 10;
    int m = 4;
    int arr[] = {2, 5, 3, 6};
    // int arr[] = {7, 5, 1};
    int dp[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        dp[i] = -1;
    }
    cout << minCoins(arr, n, dp);

    return 0;
}

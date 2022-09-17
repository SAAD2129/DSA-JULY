#include <bits/stdc++.h>

/****** SAAD a Peaceful soul ******/

using namespace std;
long long solve(vector<int> &arr)
{
     long long ans = INT_MIN;
     long long curSum = 0;
     int n = arr.size();
     
     for (int i = 0; i < n; ++i)
     {
          curSum += arr[i];
          if (curSum < 0)
          {
               curSum = 0;
          }
          ans = max(curSum, ans);
     }
     return ans;
}
int main()
{

     int t;
     cin >> t;
     while (t--)
     {
          int n,k;
          cin >> n >> k;
          vector<int> A(n);
          for (int i = 0; i < n; i++)
          {
               cin >> A[i];
          }
          for (int i = 0; i < k - 1; i++)
          {
               for (int j = 0; j < n; j++)
               {
                    A.push_back(A[j]);
               }
          }
          // for (auto i : A)
               // cout << i << " ";
          cout << solve(A) << endl;
     }

     return 0;
}
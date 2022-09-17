#include <bits/stdc++.h>

/*
 *** Saad a Peaceful Soul ***
 */
using namespace std;

const int N = 1e7 + 9;
int dp[N];

// bool isPalindorme(string s){
//      if(s.size() == 1)
//           return true;
//      if(dp[s] != "")
//           return true;
//      int n = s.size();
//      for (int i = 0; i < n/2; i++)
//      {
//           if(s[i] != s[n-i-1])
//                return false;
//      }
//      dp[s] = s;
// }
int g = 0;
int sum(vector<int> & output)
{
     int sum = 0;
     for (int i = 0; i < output.size(); i++)
     {
          sum+=output[i];
     }
     return sum;
}
void Subsets(vector<int>&arr, vector<int> output, int idx, set<int> &ans)
{
     if (arr.size() <= idx)
     {
          ans.insert(sum(output));
          return;
     }
     Subsets(arr, output, idx + 1, ans);

     int ch = arr[idx];
     output.push_back(ch);
     Subsets(arr, output, idx + 1, ans);
}
int main()
{
     set<int> ans;
     vector<int> temp;

     // memset(dp, -1, sizeof(dp));
     Subsets(vec, temp, 0, ans);
     for(auto i : ans)
     {
          temp.push_back(i);
     }
     
     // sort(ans.begin(),ans.end());
     for(auto i : temp)
          cout << i << " ";
     return 0;
}
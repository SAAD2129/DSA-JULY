#include <bits/stdc++.h>

/*
 *** Saad a Peaceful Soul ***
 */
using namespace std;

// Problem one
string removeStars(string s)
{
     stack<char> st;

     for (int i = 0; i < s.size(); ++i)
     {

          if (!st.empty() && s[i] == '*')
          {
               st.pop();
          }
          else
          {
               st.push(s[i]);
          }
     }
     string ans = "";
     while (!st.empty())
     {
          char ch = st.top();
          // cout << st.top();
          st.pop();
          ans.push_back(ch);
     }
     for (int i = 0; i < ans.size() / 2; i++)
     {
          swap(ans[i], ans[ans.size() - i - 1]);
     }

     return ans;
}

// problem two

bool checkSum(vector<int> &output, vector<int> &queries)
{
     int sum = 0;
     for (int i = 0; i < output.size(); i++)
     {
          sum += output[i];
     }
     for (int i = 0; i < queries.size(); i++)
     {
          if (sum <= queries[i])
          {
               return true;
          }
     }
     return false;
}
void Subesequenc(vector<int> A, int idx, int n, vector<vector<int>> &ans, vector<int> output, vector<int> &queries)
{
     if (idx >= n)
     {
          ans.push_back(output);
          return;
     }

     // left one
     Subesequenc(A, idx + 1, n, ans, output, queries);

     int curr = A[idx];
     output.push_back(curr);

     Subesequenc(A, idx + 1, n, ans, output, queries);
}
vector<int> answerQueries(vector<int> &nums, vector<int> &queries)
{
     vector<int> output;
     set<int> st;
     vector<vector<int>> ans;
     Subesequenc(nums, 0, nums.size(), ans, output, queries);
     for (int i = 0; i < ans.size(); i++)
     {
          for (int j = 0; j < ans[i].size(); j++)
          {
               if(checkSum(ans[i],queries))
               {
                    output.push_back(ans[i].size());
               }
          }
     }
     // priority_queue<int> pq;
     // for(auto i : st)
     // {
     //      // output.push_back(i);
     //      pq.push(i);
     // }
     // for (int i = 0; i < queries.size(); i++)
     // {
     //      output.push_back(pq.top());
     //      pq.pop();
     // }
     // if(!output.empty()){

     //      reverse(output.begin(),output.end());
     // }
     return output;
}
int main()
{

     // string ans =  removeStars("leet**cod*e");

     vector<int> A = {736411,184882,914641,37925,214915};


     vector<int> queries = {331244,273144,118983,118252,305688,718089,665450};
     vector<int> ans = answerQueries(A, queries);
     for (auto i : ans)
          cout << i << " ";

     // Subesequenc(A,0,4,ans,output);

     //     for (int i = 0; i < ans.size(); i++)
     // {
     //      for (int j = 0; j < ans[i].size(); j++)
     //      {
     //           cout << ans[i][j] << " ";
     //      }
     //      cout << endl;
     // }

     // cout << ans << endl;

     return 0;
}
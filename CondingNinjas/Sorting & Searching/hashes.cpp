#include <bits/stdc++.h>

/*
 *** Saad a Peaceful Soul ***
 */
using namespace std;

int maximumFrequency(vector<int> &arr, int n)
{

     unordered_map<int, int> mp;
     int MaxFreq = 0;
     for (int i = 0; i < n; i++)
     {
          mp[arr[i]]++;
          MaxFreq = max(MaxFreq, mp[arr[i]]);
     }
     for (int i = 0; i < n; i++)
     {
          if (MaxFreq == mp[arr[i]])
          {
               return arr[i];
          }
     }
     return -1;
}
vector<int> countTheNumber(vector<int> &arr, int n, int k)
{

     int ratio = n / k;
     vector<int> ans;
     map<int, int> count;
     for (int i = 0; i < n; i++)
     {
          count[arr[i]]++;
     }

     for (auto i : count)
     {
          if (i.second >= ratio)
               ans.push_back(i.first);
     }

     return ans;
}
pair<int, int> findSimilarity(vector<int> arr1, vector<int> arr2, int n, int m)
{
     set<int> st;
     for (int i = 0; i < m; i++)
     {
          st.insert(arr2[i]);
     }
     int ct = 0;

     for (int i = 0; i < n; i++)
     {
          if (st.count(arr1[i]))
               ct++;
          st.insert(arr1[i]);
     }
     return make_pair(ct, st.size());
}
string second_repeat(vector<string> &arr, int n)
{
     map<string, int> count;
     for (int i = 0; i < arr.size(); i++)
     {
          count[arr[i]]++;
     }
     int Maximum = INT_MIN;
     for (auto i : count)
     {
          Maximum = max(i.second, Maximum);
     }
     for (auto i : count)
     {
          // Maximum = max(i.second,Maximum);
          if (i.second == Maximum)
          {
               count.erase(i.first);
               break;
          }
     }
     Maximum = INT_MIN;
     for (auto i : count)
     {
          Maximum = max(i.second, Maximum);
     }

     for (int i = 0; i < n; i++)
     {
          if (Maximum == count[arr[i]])
          {
               return arr[i];
          }
     }
     return "";
}
void PrintVec(vector<int> &vec)
{
     for (auto i : vec)
     {
          cout << i << " ";
     }
     cout << endl;
}
#include <bits/stdc++.h>
vector<pair<int, int>> twoSum(vector<int> &arr, int target, int n)
{
     vector<pair<int, int>> ans;
     bool check = true;
     if (arr.size() == 1)
     {
          ans.push_back(make_pair(-1, -1));
          return ans;
     }
     for (int i = 0; i < n - 1; i++)
     {
          if (arr[i] != arr[i + 1])
          {
               check = false;
          }
     }
     if (check)
     {
          for (int i = 0; i < n / 2; i++)
          {
               ans.push_back(make_pair(arr[i], arr[i]));
          }
          return ans;
     }

     map<int, int> mp;
     for (int i = 0; i < n; i++)
     {
          mp.insert(make_pair(arr[i], i));
     }
     for (int i = 0; i < n; i++)
     {
          if (mp.count(target - arr[i]))
          {
               if (target - arr[i] > arr[i])
               {
                    ans.push_back(make_pair(arr[i], target - arr[i]));
               }
               else
               {
                    ans.push_back(make_pair(target - arr[i], arr[i]));
               }
               mp.erase(arr[i]);
          }
     }
     if (ans.size() == 0)
     {
          ans.push_back(make_pair(-1, -1));
     }
     return ans;
}
int main()
{
     int t;

     cin >> t;
     while (t--)
     {
          int n, s;
          cin >> n >> s;
          // int *arr = new int[n];
          // INPUT VECTOR FOR NUMBERS
          vector<int> a1;
          for (int i = 0; i < n; ++i)
          {
               int num;
               cin >> num;
               a1.push_back(num);
          }

          // INPUT VECTOR FOR STRINGS
          // vector<string> a1;
          // for (int i = 0; i < n; ++i)
          // {
          //      string str;
          //      cin >> str;
          //      a1.push_back(str);
          // }
          vector<pair<int, int>> ans = twoSum(a1, s, n);
          for (auto i : ans)
          {
               cout << i.first << " " << i.second << endl;
          }
     }

     return 0;
}
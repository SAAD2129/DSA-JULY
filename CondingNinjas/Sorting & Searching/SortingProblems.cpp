#include <bits/stdc++.h>

/*
 *** Saad a Peaceful Soul ***
 */
using namespace std;

vector<int> sortArrayByKBit(int n, int k, int *arr)
{
     vector<int> ans;
     for (int i = 0; i < n; ++i)
     {

          int number = arr[i];
          number = number >> k - 1;
          int bit = number & 1;
          if (bit == 0)
               ans.push_back(arr[i]);
     }

     for (int i = 0; i < n; ++i)
     {

          int number = arr[i];
          number = number >> k - 1;
          int bit = number & 1;
          if (bit == 1)
               ans.push_back(arr[i]);
     }

     return ans;
}

vector<int> sortBinaryArray(vector<int> arr, int n)
{

     vector<int> ans;

     for (int i = 0; i < n; i++)
     {
          if (arr[i] == 0)
          {
               ans.push_back(arr[i]);
          }
     }
     for (int i = 0; i < n; i++)
     {
          if (arr[i] == 1)
          {
               ans.push_back(arr[i]);
          }
     }
     return ans;
}

void sortHalfSorted(vector<int> &arr)
{

     for (int i = 0; i < arr.size() - 1; i++)
     {
          for (int j = i + 1; j < arr.size(); j++)
          {
               if (arr[i] > arr[j])
                    swap(arr[i], arr[j]);
          }
     }
}

int SettedBits(int num)
{
     int ct = 0;
     while (num > 0)
     {
          if (num & 1)
               ct++;

          num >>= 1;
     }

     return ct;
}

void sortSetBitsCount(vector<int> &arr, int size)
{
     // int *Aux = new int[size];
     // for (int i = 0; i < size; i++)
     // {
     //      Aux[i] = SettedBits(arr[i]);
     // }
     // for (int i = 0; i < size; ++i)
     //      cout << Aux[i] << " ";
     // cout << endl
     //      << endl;
}

void waveFormArray(vector<int> &arr, int n)
{
     // Write your code here.
}

// Relavtive sorting
vector<int> relativeSorting(vector<int> &arr, vector<int> &brr, int n, int m)
{
     unordered_multiset<int> st1;

     for (int i = 0; i < n; ++i)
     {
          st1.insert(arr[i]);
     }
     // cout << "count is present " << st1.count(5);
     vector<int> ans;
     for (int i = 0; i < m; i++)
     {
          int count = st1.count(brr[i]);
          while (count--)
          {
               ans.push_back(brr[i]);
               st1.erase(brr[i]);
          }
     }
     // pushing lefted element
     vector<int> temp;
     for (auto i : st1)
     {
          temp.push_back(i);
     }
     // sorting the prev part
     sort(temp.begin(), temp.end());

     for (auto i : temp)
     {
          ans.push_back(i);
     }
     return ans;
}

int main()
{
     int t;
     cin >> t;
     while (t--)
     {

          int n, k;
          cin >> n >> k;

          vector<int> A;
          // int A[n];

          for (int i = 0; i < n; i++)
          {
               int num;
               cin >> num;
               // cin >>A[i];
               A.push_back(num);
          }
     }

     return 0;
}
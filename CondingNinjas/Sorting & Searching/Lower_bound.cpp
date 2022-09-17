#include <bits/stdc++.h>

/*
 *** Saad a Peaceful Soul ***
 */
using namespace std;
#define eps 1e-5
int lowerBound(vector<int> &ar, int target)
{

     int lo = 0, hi = ar.size() - 1;
     while (lo < hi)
     {
          int mid = lo + (hi - lo) / 2;

          if (target > ar[mid])
               lo = mid + 1;

          else if (target < ar[mid])
               hi = mid;

          else
               return mid;
     }

     if (ar[hi] > target)
          return hi;

     return -1;
}
int upperBound(vector<int> &ar, int target)
{

     int lo = 0, hi = ar.size() - 1;
     while (lo < hi)
     {
          int mid = lo + (hi - lo) / 2;

          if (target >= ar[mid])
               lo = mid + 1;

          else
               hi = mid;
     }

     if (ar[hi] > target)
          return hi;

     return -1;
}

double Mulitply(double mid, int n)
{
     double ans = 1;
     for (int i = 0; i < n; i++)
     {
          ans *= mid;
     }
     return ans;
}
double nthRootOfNumber(double n, int root)
{

     double low = 1, high = n;
     while (high - low > eps)
     {
          double mid = low + (high - low) / 2;
          if (Mulitply(mid, root) < n)
          {
               low = mid;
          }
          else
          {
               high = mid;
          }
     }
     return high;
}
int main()
{
     double n;
     int root;
     cin >> n >> root;
     cout << nthRootOfNumber(n, root) << endl;

     // int n, toFind;
     // cin >> n >> toFind;
     // vector<int> arr(n);
     // for (int i = 0; i < n; i++)
     // {
     //      cin >> arr[i];
     // }
     // // cout << lowerBound(arr, toFind) << endl;
     // // cout << upperBound(arr, toFind) << " " << arr[upperBound(arr, toFind)] << endl;
     // cout << lowerBound(arr, toFind) << " " << arr[lowerBound(arr, toFind)] << endl;

     return 0;
}
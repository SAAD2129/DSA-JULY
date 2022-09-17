#include <bits/stdc++.h>

/*
 *** Saad a Peaceful Soul ***
 */
using namespace std;

int getPivot(vector<int> &A, int n)
{
     int low = 0;
     int high = n;
     int mid = low + (high - low) / 2;
     while (low < high)
     {
          if (A[mid] >= A[0])
          {
               low = mid + 1;
          }
          else
          {
               high = mid;
          }
          mid = low + (high - low) / 2;
     }
     return high;
}
int Bsearch(vector<int> &arr, int low, int n, int k)
{
     int high = n;
     int mid = low + (high - low) / 2;
     // return mid;
     while (low <= high)
     {
          if (arr[mid] == k)
               return mid;
          if (k > arr[mid])
          {
               low = mid + 1;
          }
          else
          {

               high = mid - 1;
          }

          mid = low + (high - low) / 2;
     }
     return -1;
}
int SearchInRotatedArray(vector<int> &arr, int n, int k)
{

     int Pivot = getPivot(arr, n);
     if (k >= arr[Pivot])
     {
          return Bsearch(arr, Pivot, n, k);
     }
     return Bsearch(arr, 0, Pivot - 1, k);
}
int findPosition(vector<int> &arr, int n, int k)
{
     int high = n - 1;
     int low = 0;
     int mid = low + (high - low) / 2;
     // return mid;
     while (low <= high)
     {
          if (arr[mid] == k)
               return mid;
          if (k > arr[mid])
          {
               if (k >= arr[low] && k < arr[mid])
               {
                    high = mid - 1; // 2
               }
               else
               {
                    low = mid + 1;
               }
          }
          else
          {
               if (k >= arr[mid] && k < arr[high])
               {
                    low = mid + 1;
               }
               else
               {
                    high = mid - 1;
               }
          }

          mid = low + (high - low) / 2;
     }
     return -1;
}

int left(int arr[], int n, int X)
{

     int idx = 0;
     int low = 0;
     int high = n - 1;

     while (low <= high) // 3 / 4
     {
          // 1 2 4
          int mid = low + (high - low) / 2;
          if (X == arr[mid])
          {
               idx = mid;
               high = mid - 1;
          }
          else if (X > arr[mid])
          {
               low = mid + 1;
          }
          else
          {
               high = mid - 1;
          }
     }
     return idx;
}
int right(int arr[], int n, int X)
{

     int idx = 0;
     int low = 0;
     int high = n - 1;
     while (low <= high) // 3 / 4
     {
          // 1 2 4
          int mid = low + (high - low) / 2;
          if (X == arr[mid])
          {
               idx = mid;
               low = mid + 1;
          }
          else if (X > arr[mid])
          {
               low = mid + 1;
          }
          else
          {
               high = mid - 1;
          }
     }
     return idx;
}
int squareRoot(int a, int preci)
{
     int low = 1;
     int high = a;
     int mid = low + (high - low) / 2;

     while (low <= high)
     {

          if (mid * mid == a)
               return mid;
          else if (mid * mid > a)
          {
               high = mid - 1;
          }
          else
          {
               low = mid + 1;
          }
          mid = low + (high - low) / 2;
     }
     double number = mid - 1;
     double factor = 0.9;
     double integer = 10;
     double temp = 0.1;
     for (int i = 0; i < preci; i++)
     {
     }

     return number;
}
int PeakIndex(vector<int> arr)
{
     int low = 0;
     int high = arr.size() - 1;
     int Max = 0;
     int mid = low + (high - low) / 2;
     while (low <= high)
     {
          if (arr[mid] < arr[mid + 1])
          {
               low = mid + 1;
          }
          else
          {
               high = mid;
          }
          mid = low + (high - low) / 2;
     }
     return -1;
}

int findPeak(vector<int> &arr)
{

     int low = 0;
     int high = arr.size() - 1;
     int mid = low + (high - low) / 2;
     int ans = -1;
     while (low < high)
     {
          if (arr[mid] <= arr[mid + 1])
          {
               ans = mid + 1;
               low = mid + 1;
          }
          else
          {
               high = mid;
          }
          mid = low + (high - low) / 2;
     }
     return arr[ans];
}
bool isPossible(vector<int> &stalls, int k, int mid)
{
     int cowct = 1;
     int lastPos = stalls[0];
     for (int i = 0; i < stalls.size(); i++)
     {
          if (stalls[i] - lastPos >= mid) // 3
          {
               cowct++;
               lastPos = stalls[i];
          }
          if (cowct == k)
               return true;
     }

     return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
     sort(stalls.begin(), stalls.end());
     int n = stalls.size();
     int low;
     int high = INT_MIN;
     for (int i = 0; i < n; i++)
     {
          high = max(stalls[i], high);
     }
     low = 0;
     int ans = -1;
     while (low <= high)
     {
          int mid = low + (high - low) / 2;
          if (isPossible(stalls, k, mid))
          {
               low = mid + 1;
               ans = mid;
          }
          else
          {
               high = mid - 1;
          }
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
          cout << aggressiveCows(A, k) << endl;
     }

     return 0;
}
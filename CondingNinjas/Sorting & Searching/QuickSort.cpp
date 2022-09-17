#include <bits/stdc++.h>

/*
 *** Saad a Peaceful Soul ***
 */
using namespace std;

int ct = 0;

void Swap(int arr[], int s, int e)
{
     int temp = arr[s];
     arr[s] = arr[e];
     arr[e] = temp;

}
int Partition(int arr[], int low, int high) //{5,12 ,25, 89, 843, 9} 0 5
{
     int Pivot = arr[low]; // 3
     int i = low;          // 0
     int j = high;
     while (i < j)
     {
          while (arr[i] <= Pivot)
               i++;
          while (arr[j] > Pivot)
               j--;
          if (i < j)
          {
                    ct++;
               Swap(arr, i, j);
          }
     }
     Swap(arr, j, low);
     return j;
}

void QuickSort(int arr[], int low, int high)
{
     if (low < high)
     {
          int Pivot = Partition(arr, low, high);
          QuickSort(arr, low, Pivot - 1);
          QuickSort(arr, Pivot + 1, high);
     }
}
int main()
{

     int n;
     cin >> n;

     int *A = new int[n];
     for (int i = 0; i < n; ++i)
          cin >> A[i];

     QuickSort(A, 0, n - 1);

     for (int i = 0; i < n; i++)
     {
          cout << A[i] << " ";
     }
     cout << ct << endl;

     return 0;
}
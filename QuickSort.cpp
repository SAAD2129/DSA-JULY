#include <bits/stdc++.h>

/****** SAAD A PEACEFUL SOUL ******/

using namespace std;

void Swap(int arr[], int s, int e)
{
    // arr[s] = arr[s] ^ arr[e];
    // arr[e] = arr[s] ^ arr[e];
    // arr[s] = arr[s] ^ arr[e];
    int temp = arr[s];
    arr[s] = arr[e];
    arr[e] = temp;
}
int Partition(int arr[], int low, int high) //{5,12 ,25, 89, 843, 9} 0 5
{
    int Pivot = arr[low]; // 3
    int i = low;      // 0
    int j = high;
    while (i < j)
    {
        while (arr[i] <= Pivot)
            i++;
        while (arr[j] > Pivot)
            j--;
        if (i < j)
        {
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

    int arr[] = {3345, 3,3,4,2,1,342, 553,3,2, 3, 1};
    int n = sizeof(arr) / sizeof(int);
    QuickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
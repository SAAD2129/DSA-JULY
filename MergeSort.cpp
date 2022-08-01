#include <bits/stdc++.h>

/****** SAAD A PEACEFUL SOUL ******/

using namespace std;

void Merge(int a[], int left, int m, int right)
{
    int i = left;
    int b[right];
    int k = left;
    int j = m + 1;
    while (i <= m && j <= right)
    {
        if (a[i] < a[j])
        {
            b[k] = a[i];
            i++;
        }
        else
        {
            b[k] = a[j];
            j++;
        }
        k++;
    }
    if (i > m)
    {
        while (j <= right)
        {
            b[k] = a[j];
            k++;
            j++;
        }
    }
    else
    {
        while (i <= m)
        {
            b[k] = a[i];
            k++;
            i++;
        }
    }
    for (int i = left; i < right; i++)
    {
        a[i] = b[i];
    }
}
void MergeSort(int a[], int l, int r)
{   
    if (l < r)
    {
        int m = (l + r) / 2; // {4, 1, 3, 9, 7};//0 4
        MergeSort(a, l, m);  //{4, 1, 3, 9, 7};//0 2///{4, 1, 3, 9, 7};//0 1
        MergeSort(a, m + 1, r);
        Merge(a, l, m, r);
    }
}

void PrArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{

    int arr[] = {4, 1, 3, 9, 7};
    int n = sizeof(arr) / sizeof(int);
    MergeSort(arr, 0, n-1);
    PrArray(arr, n);
    return 0;
}

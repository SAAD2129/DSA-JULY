#include <bits/stdc++.h>

/****** SAAD A PEACEFUL SOUL ******/

using namespace std;
void swap(int a[], int i, int j)
{
    int t = a[i];
    a[i] = a[j];
    a[j] = t;
}
void BubbleSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool swaped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a, j, j + 1);
                swaped = true;
            }
        }
        if (!swaped)
            return;
    }
}
void PrintArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
}
int main()
{

    int arr[] = {43, 5, 25, 35, 289, 2, 1};
    int n = sizeof(arr) / sizeof(int);
    BubbleSort(arr, n);
    PrintArr(arr, n);
    return 0;
}
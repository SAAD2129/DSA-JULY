#include <bits/stdc++.h>

/****** SAAD A PEACEFUL SOUL ******/

using namespace std;

int sumArr(int a[],int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    return sum;
}

int maxOfArr(int a[],int n)
{
    int Max = INT_MIN;
    for (int i = 0; i < n; i++)
        Max = max(a[i], Max);
    return Max;
}

bool isFesible(int *a, int k, int res,int n)
{
    int student = 1, sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum + a[i] > res)
        {
            student++;
            sum = a[i];
        }
        else
        {
            sum += a[i];
        }
    }
    return student <= k;
}

int minPages(int a[], int k,int n)
{
    int min = maxOfArr(a,n);
    // cout<<min<<" min\n";
    int max = sumArr(a,n);
    // cout << max << " Max\n";
    int result = 0;
    while (min <= max)
    {
        int mid = (min + max) / 2;
        if (isFesible(a, k, mid,n))
        {
            result = mid;
            max = mid - 1;
        }
        else
        {
            min = mid + 1;
        }
    }
    return result;
}
int main()
{
    int arr[] = {10,5,20};
    int n=sizeof(arr)/sizeof(int);
    cout << minPages(arr, 2,n);
    return 0;
}
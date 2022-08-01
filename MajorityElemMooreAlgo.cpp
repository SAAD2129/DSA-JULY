#include <bits/stdc++.h>

/****** SAAD A PEACEFUL SOUL ******/

using namespace std;

int main()
{

    int ansIndex = 0;
    int count = 1;
    int a[] = {1, 1, 1, 2, 2, 3, 5};
    int n = sizeof(a) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[ansIndex])
            count++;
        else
            count--;
        if (count == 0)
        {
            ansIndex = i;
            count = 1;
        }
    }
    // count = 0;
    cout<<a[ansIndex];
    // for (int i = 0; i < n; i++)
    // {
    //     if (a[ansIndex] == a[i])
    //     {
    //         count++;
    //     }
    // }
    // cout << count;
    return 0;
}
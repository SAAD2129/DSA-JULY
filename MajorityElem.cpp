#include<bits/stdc++.h>

using namespace std;

int main()
{

    int ansInd = 0;
    int a[] = {1, 1, 3, 4, 1};
    int n = 5;
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[ansInd]) // 1
        {
            count++; // 0
        }
        else
        {
            count--; // 0-1
        }
        if (count == 0)
        {
            ansInd = i; //
            count = 1;
        }
    }
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[ansInd] == a[i])
        {
            count++;
        }
    }
    cout << count << " ";
    cout << a[ansInd];
    return 0;
}
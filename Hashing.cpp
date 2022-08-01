// #include <bits/stdc++.h>

// /****** SAAD A PEACEFUL SOUL ******/

// using namespace std;
// QUESTIONS

// UNION OF ARRAYS ,INTERSECTION OF ARRAYS & DISTICT ELEMENTS
// int Union(int a[], int b[], int )
// {
//     unordered_set<int> s;,
//     for (int i : a)
//     {
//         s.insert(i);
//     }
//     for (int i=0;i<
//     {
//         s.insert(i);
//     }
//     sort(s.begin(), s.end());
//     for (int i : s)
//     {
//         cout << i << " ";
//     }
// }
// int main()
// {

//     int arr[] = {3, 5, 7, 8, 12, 37, 59};
//     int ar1[] = {12, 37, 59};
//     Union(arr, ar1);

//     return 0;
// }

#include <bits/stdc++.h>

/****** SAAD A PEACEFUL SOUL ******/

using namespace std;
// SUB ARRAY WITH GIVEN SUM
// int SubArrSum(int a[], int n, int sum)
// {
//     int start = 0;
//     int curSum = 0; //{10, 15, -5, 15, -10, 5} sum=5
//     int end = -1;
//     unordered_set<pair<int,int>> mp;
//     for (int i = 0; i < n; i++) // 10 0 ->  25 1 --> 20 2 -> 35 3 -->
//     {
//         curSum += a[i];
//         if (curSum - sum == 0)
//         {
//             start = 0;
//             end = i;
//             break;
//         }
//         if (mp.count(curSum - sum))
//         {
//             start = mp.count(curSum-sum) + 1;
//             end = i;
//             break;
//         }
//         mp.insert(curSum, i);
//         mp.
//     }
//     if (!end)
//         return -1;
//     else
//         return 1;
// }
// int main()
// {
//     int sum = 5;
//     int a[] = {10, 15, -5, 15, -10, 5};
//     int n = sizeof(a) / sizeof(int);
//     cout<<SubArrSum(a,n,sum);
//     return 0;
// }

#include <bits/stdc++.h>

/****** SAAD A PEACEFUL SOUL ******/

using namespace std;
void CountDistinct(int a[], int k, int n)
{
    map<int,int> mp;
    for (int i = 0; i < k; i++)
    {
        mp.insert(a[i],1);
        // mp.insert(43,32);;
    }
    
}
int main()
{

    int arr[] = {3, 5, 7, 8, 12, 37, 59};
    int n = sizeof(arr) / sizeof(int);
    CountDistinct(arr, 3, n);

    return 0;
}
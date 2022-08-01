// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int n;
//     vector <int> v;
//     cin >> n;
//     int *h = (int *)calloc(n, sizeof(int));
//     int *l = (int *)calloc(n, sizeof(int));
//     int *r = (int *)calloc(n, sizeof(int));
//     for (int i = 0; i < n; i++)
//     {
//         cin >> h[i];
//     }
//     l[0] = h[0];
//     for (int i = 1; i < n; i++)
//     {
//         l[i] = max(l[i - 1], h[i]);
//     }
//     r[n - 1] = h[n - 1];
//     for (int i = n - 2; i >= 0; i--)
//     {
//         r[i] = max(r[i + 1], h[i]);
//     }
//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         ans += (min(l[i], r[i]) - h[i]);
//     }

//     cout << ans;

//     return 0;
// }
#include<bits/stdc++.h>

/****** SAAD A PEACEFUL SOUL ******/

using namespace std;

int main(){

    int a[]={3,1,2,4,0,1,3,2};
    int n=sizeof(a)/sizeof(int);
    int l[n];
    int r[n];
    l[0]=a[0];
    r[n-1]=a[n-1];
    int rain=0;
    for (int i = 1; i < n; i++)
    {
        l[i]=max(a[i],l[i-1]);
    }
    for (int i = n-2; i >=0; i--)
    {
        r[i]=max(a[i],r[i+1]);
    }
    for (int i = 0; i < n; i++)
    {
        rain+=(min(l[i],r[i])-a[i]);
    }
    cout<<rain;
    return 0;
}
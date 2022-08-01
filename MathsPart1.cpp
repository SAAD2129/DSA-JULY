#include <bits/stdc++.h>

/****** SAAD A PEACEFUL SOUL ******/

using namespace std;
// NUMBER OF TRAILING ZEROS
int main()
{

    // int result=0;
    // int n;
    // cin>>n;
    // for (int i = 5; i <= n; i*=5)
    // {
    //     result+=(n/i);
    // }
    // cout<<result;
    // reversed=n;
    // Reversing
    int n, reversed = 0;
    cin >> n;
    while (n > 0)
    {
        int rem = n % 10;
        reversed = reversed * 10 + rem;
        n /= 10;
    }

    cout << reversed;
    return 0;
}
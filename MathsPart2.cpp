#include <bits/stdc++.h>

/****** SAAD A PEACEFUL SOUL ******/

using namespace std;
int Gcd(int a, int b)
{
    if (a == 0)
        return b;
    return Gcd(b % a, a);
}

//  N to P USING RECURSION
int Power(int n, int p)
{
    return (p == 1) ? n : (n)*Power(n, p - 1);
}
int main()
{
    // cout<<Gcd(12,60);
    int n;
    cin >> n;
    int p;
    cin >> p;
    cout << Power(n, p);
    // int array[n];
    // int c = 0;

    // array[0] = false;
    // array[1] = false;
    // for (int i = 2; i <= n; i++)
    //     array[i] = true;

    // for (int i = 2; i * i <= n; i++)
    //     for (int j = 2 * i; j <= n; j += i)
    //         array[j] = false;

    // for (int i = 0; i <= n; i++)
    //     if (array[i])
    //         c++;
    // cout << c;
    return 0;
}
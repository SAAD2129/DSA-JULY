// #include <bits/stdc++.h>

// /****** SAAD A PEACEFUL SOUL ******/

// using namespace std;
// int fib(int n)
// {
//     if (n == 1 || n == 0)
//         return n;
//     return fib(n - 1) + fib(n - 2);
// }
// int main()
// {

//     int n1 = 0, n2 = 1, n3;
//     int n;
//     // 0 1 1 2 3 5 8
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         n3 = n1 + n2;
//         n1 = n2;
//         n2 = n3;
//     }
//     cout << n1 << endl;
//     cout << fib(n) << endl;

//     return 0;
// }
#include <bits/stdc++.h>

/****** SAAD A PEACEFUL SOUL ******/

using namespace std;
typedef struct emps
{
    string name;
    string license;
    string route;
    int Kms;
} emp;

int main()
{
    int n;
    cin >> n;
    emp e[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the Employe name ";
        getline(cin,e[i].name);
        getchar();
        cout << "Enter the route ";
        getline(cin,e[i].route);
        getchar();
        cout << "Enter the license name ";
        getline(cin,e[i].license);
        getchar();
        cout << "Enter the number of kilometers ";
        cin>>e[i].Kms;
    }
    for (int i = 0; i < n; i++)
    {
        cout << " the Employe name "<<e[i].name;
        cout << " the route "<<e[i].route;
        cout << " the license name "<<e[i].license;
        cout << " the number of kilometers name "<<e[i].Kms;
        cout<<"\n\n\n";
    }
    string s;
    return 0;
}
#include <bits/stdc++.h>

/****** SAAD A PEACEFUL SOUL ******/

using namespace std;
string Reversed(string s)
{
    string newStr;
    if (s.length() == 1)
        return s;
    // return Reversed(s.substr(1))+;
    // return newStr;
}
int iter = 0;
int NthTermGp(int N, int A, int R)
{
    if (N == 1)
        return A;
    return NthTermGp(N - 1, A, R) * R;
}
int main()
{
    // cout << Reversed("Sajid");
    int n, r, a;
    int Mod = 1e9 + 7;
    // for (int i = 0; i < 10; i++)
    // {
    //     scanf("%d %d %d", &n, &a, &r);
    //     cout << (NthTermGp(n, a, r) % Mod) << endl;
    // }
    // scanf("%d %d %d", &n, &a, &r);

    // cout << NthTermGp(n, a, r)<< endl;
    cout << Reversed("Sajid");
    // 6 2 4
    return 0;
}
int main(){
    cout << "hello World Welcome to the programmers world"
}
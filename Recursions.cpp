#include <bits/stdc++.h>

/* --> SAAD A PEACEFUL SOUL <-- */

using namespace std;
// Replacing Pi
void replacePi(string s)
{
    if (!s.length())
    {
        return;
    }
    if (s.at(0) == 'p' && s.at(1) == 'i')
    {
        cout << "3.14";
        replacePi(s.substr(2));
    }
    else
    {
        cout << s[0];
        replacePi(s.substr(1));
    }
}

// REVERSING THE STRING
void Reverse(string s)
{
    if (!s.length())
    {
        return;
    }
    string ros = s.substr(1);
    Reverse(ros);
    cout << s[0];
}

// TOWER OF HANOI FAMOUS PROBLEM
int ct = 0;
void TowerOfHanoi(int n, char src, char helper, char dest)
{
    if (n == 1)
    {
        cout << "Transefring " << n << " from " << src << " to " << dest << endl;

        return;
    }
    // ct++;
    TowerOfHanoi(n - 1, src, dest, helper);
    cout << "Transefring " << n << " from " << src << " to " << dest << endl;
    TowerOfHanoi(n - 1, helper, src, dest);
}
// REMOVING DUPLICATES
bool A[26];
string RemoveDuplicates(string s, int idx, string Str)
{
    if (idx == s.length())
    {
        return Str; // aa
    }
    char charAt = s.at(idx);
    if (A[charAt - 'a'])
    {
        return RemoveDuplicates(s, idx + 1, Str);
    }
    else
    {
        Str += charAt;
        A[charAt - 'a'] = true;
        return RemoveDuplicates(s, idx + 1, Str);
    }
}
// MOVING ALL X
string MoveAllX(string s, int ind, string newStr, int ct)
{
    if (ind == s.length())
    {
        for (int i = 0; i < ct; i++)
        {
            newStr += 'x';
        }
        return newStr;
    }
    char charAt = s.at(ind);
    if (charAt != 'x')
    {
        newStr += charAt;
        return MoveAllX(s, ind + 1, newStr, ct);
    }
    else
    {
        ct++;
        return MoveAllX(s, ind + 1, newStr, ct);
    }
}
int Jos(int n, int k)
{
    if (n == 1)
        return 0;
    return (Jos(n - 1, k) + k) % n;
}

int Ways(int n, int m)
{
    if (n == 1 || m == 1)
        return 1;
    return (n - 1, m) + (n, m - 1);
}
vector<string> v;
void PerMutation(string s, int i, string st)
{
    if (i == s.length())
    {
        v.push_back(st);
        return;
    }
    char c = s.at(i);
    PerMutation(s, i + 1, st + c);
    PerMutation(s, i + 1, st);
}

int main()
{
    // cout<<Jos(5,3);
    // cout << Ways(3, 3);
    // replacePi("pippppiiiipi");
    // Reverse("Sajid");
    // TowerOfHanoi(4, 'S', 'H', 'D');
    // cout<<MovaAllX("abxxxcdfxbsx");
    // memset(A, false, sizeof(A));
    // cout << RemoveDuplicates("aaaaabbbbccccceeeedddd", 0, "");
    // cout<<MoveAllX("axxcavxxds",0,"",0);
    // cout<<newStr;
    PerMutation("ABC", 0, "");
    sort(v.begin(),v.end());
    for(auto i: v)
    {
        cout<<i<<endl;
    }
    return 0;
}
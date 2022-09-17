#include <bits/stdc++.h>

/*
 *** Saad a Peaceful Soul ***
 */
using namespace std;
void PerMutation(int *arr, int i, string st)
{
     if (i == s.length())
     {
          // v.push_back(st);
          return;
     }
     char c = s.at(i);
     PerMutation(s, i + 1, st + c);
     PerMutation(s, i + 1, st);
}
int main()
{


     return 0;
}
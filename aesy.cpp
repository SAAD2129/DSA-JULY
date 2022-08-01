// #include <bits/stdc++.h>

// /****** SAAD A PEACEFUL SOUL ******/

// using namespace std;
// void Swap(vector<int> &a, int i, int j)
// {
//     int t = a[i];
//     a[i] = a[j];
//     a[j] = t;
// }
// void Insertion(vector<int> &a, int n, int element)
// {

//     a.push_back(element);
//     int i = n;
//     while (i > 1)
//     {
//         int p = i / 2;
//         if (a[i] > a[p])
//         {
//             Swap(a, i, p);
//             i = p;
//         }
//         else
//             return;
//     }
// }
// void Deletion(vector<int> &a, int n ,int arr[])
// {
//     int i = 1;
//     a[1] = 0;
//     a[i] = a[n - 1];
//     a.pop_back();
//     // cout<<a[i];
//     while (i < log2(n))
//     {
//         int lc = i * 2;
//         int rc = i * 2 + 1;
//         if (a[lc] > a[rc])
//             if (a[i] < a[lc])
//                 Swap(a, i, lc);
//         else
//             if (a[i] < a[rc])
//                 Swap(a, i, lc);
//         i *= 2;
//     }
// }
// int main()
// {
//     vector<int> v = {0, 50, 40, 35, 30, 25, 20, 15};
//     // int ele;
//     // cin>>ele;
//     // cout << v.size();
//     // for (int i = 1; i < v.size(); i++)
//     // {
//     //     cout << v[i] << " ";
//     // }
//     // cout << "\n";
//     // Insertion(v, v.size(), ele);
//     // for (int i = 1; i < v.size(); i++)
//     // {
//     //     cout<<v[i]<<" ";

//     // }
//     // cout<<"\n";
//     int N=v.size();
//     int Array[N];
//     Deletion(v, v.size(),Array);
//     for (int i = 1; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
//     cout << "\n";
//     return 0;
// }
#include <bits/stdc++.h>

/****** SAAD A PEACEFUL SOUL ******/

using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node() {}
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};
void print(Node *head)
{
    Node *t = head;
    while (t != NULL)
    {
        cout << t->data << " ";
        t = t->next;
    }
}
Node *Reverse(Node *head)
{
    Node *cur = head;
    Node *prev=NULL;
    Node *temp=cur;
    while (cur!=NULL)
    {
        temp=cur->next;
        cur->next=prev;
        prev=cur;
        cur=temp;
    }
    return prev;
    
}
int main()
{

    Node *head = new Node;
    Node *n1 = new Node(5321);
    Node *n2 = new Node(583);
    Node *n3 = new Node(324);
    Node *n4 = new Node(352);
    Node *n5 = new Node(932);
    head = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    print(head);
    cout<<"\n";
    Node*n=Reverse(head);
    print(n);
    return 0;
}
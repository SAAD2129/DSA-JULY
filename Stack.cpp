// // // #include <bits/stdc++.h>

// // // /****** SAAD A PEACEFUL SOUL ******/
// // // #define n 100
// // // using namespace std;
// // // STACK USING ARRAYS
// // // class Stack
// // // {
// // //     int *arr;
// // //     int Top;
// // //     int Size;

// // // public:
// // //     Stack()
// // //     {
// // //         arr = new int[n];
// // //         Top = -1;
// // //     }
// // //     void pop()
// // //     {
// // //         if (Top == -1)
// // //             return;
// // //         Top--;
// // //         Size--;
// // //     }
// // //     void push(int data)
// // //     {
// // //         if (Top == Size - 1)
// // //             return;
// // //         Top++;
// // //         arr[Top] = data;
// // //         Size++;
// // //     }
// // //     int top()
// // //     {
// // //         return arr[Top];
// // //     }
// // //     int size()
// // //     {
// // //         return Size;
// // //     }
// // //     bool isEmpty()
// // //     {
// // //         return Top==-1;
// // //     }
// // //     bool isFull()
// // //     {
// // //         return (Top==Size-1);
// // //     }
// // // };
// // // int main()
// // // {
// // //     Stack s;
// // //     s.push(3);
// // //     s.push(2);
// // //     s.push(1);
// // //     s.size();
// // //     cout<<s.isEmpty()<<"\n";
// // //     cout<<s.isFull()<<"\n";
// // //     cout<<s.top()<<" ";
// // //     s.pop();
// // //     cout<<s.top()<<" ";
// // //     s.pop();
// // //     cout<<s.top()<<" \n";
// // //     s.pop();
// // //     cout << s.isEmpty() << "\n";
// // //     return 0;
// // // }

// // #include <bits/stdc++.h>

// // /****** SAAD A PEACEFUL SOUL ******/

// // using namespace std;
// // class Node
// // {
// //     int data;
// //     int Size = 0;
// //     Node *next;
// //     Node *head;

// // public:
// //     Node() {}
// //     Node(int val)
// //     {
// //         data = val;
// //         next = NULL;
// //         head = NULL;
// //     }
// //     int top()
// //     {
// //         return head->data;
// //     }
// //     void push(int val)
// //     {
// //         Node *temp = new Node(val);
// //         temp->next = head;
// //         head = temp;
// //         Size++;
// //     }
// //     void pop()
// //     {
// //         if (Size<=-1)
// //         {
// //             cout << "Underflow";
// //             return;
// //         }
// //         Node *toDelete = head;
// //         head = head->next;
// //         delete toDelete;
// //         Size--;
// //     }
// //     int size()
// //     {
// //         return Size;
// //     }
// // };
// // int main()
// // {

// //     Node s;
// //     s.push(53);
// //     s.push(432);
// //     s.push(533);
// //     cout << s.size() << endl;
// //     cout << s.top() << " ";
// //     s.pop();
// //     cout << s.top() << " ";
// //     s.pop();
// //     cout << s.top() << " ";
// //     s.pop();
// //     cout << s.top() << " \n";
// //     s.pop();
// //     cout << s.size();
// //     // cout << s.top() << " ";
// //     // s.pop();
// //     string str;
// //     stack<int> st;

// //     return 0;
// // }
// #include <bits/stdc++.h>

// /****** SAAD A PEACEFUL SOUL ******/

// using namespace std;

// int main()
// {
//     // BRUTE FORCE SOLUTION O(N^2)
//     // int arr[] = {4, 10, 5, 8, 20, 15, 3, 12};
//     // int arr[] = {3, 10, 5, 1, 15, 10, 7, 6};
//     int arr[] = {1, 3, 2, 4};
//     int n = sizeof(arr) / sizeof(int);
//     // int a[n];
//     // for (int i = 0; i < n; i++)
//     // {
//     //     a[i] = -1;
//     // }
//     cout << "Origial Array\n";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << "\n";
//     // for (int i = 0; i < n; i++)
//     // {
//     //     for (int j = i - 1; j >= 0; j--)
//     //     {
//     //         if (arr[i] > arr[j])
//     //         {
//     //             a[i] = arr[j];
//     //             break;
//     //         }
//     //     }
//     // }
//     // cout << "Previous Lesser\n";
//     // for (int i = 0; i < n; i++)
//     // {
//     //     cout << a[i] << " ";
//     // }
//     // cout << "\n";
//     // for (int i = 0; i < n; i++)
//     // {
//     //     a[i] = -1;
//     // }

//     // for (int i = 0; i < n; i++)
//     // {
//     //     for (int j = i - 1; j >= 0; j--)
//     //     {
//     //         if (arr[i] < arr[j])
//     //         {
//     //             a[i] = arr[j];
//     //             break;
//     //         }
//     //     }
//     // }
//     // cout << "Previous Greater\n";
//     // for (int i = 0; i < n; i++)
//     // {
//     //     cout << a[i] << " ";
//     // }
//     // cout << "\n";
//     // O(N) OPTIMIZED
//     // FOR NEAREST SMALLER PREVIOUS ELEMENT
//     stack<int> st;
//     // for (int i = 0; i < n; i++)
//     // {
//     //     while (!st.empty())
//     //     {
//     //         if (arr[i] > st.top())
//     //             break;
//     //         st.pop();
//     //     }
//     //     if (st.empty())
//     //         cout << -1 << " ";
//     //     else
//     //         cout << st.top() << " ";
//     //     st.push(arr[i]);
//     // }
//     // cout<<"\n";
//     // FOR NEAREST GREATER PREVIOUS ELEMENT
//     vector<int> s;
//     for (int i = n - 1; i >= 0; i--)
//     {
//         while (!st.empty())
//         {
//             if (arr[i] < st.top())
//                 break;
//             st.pop();
//         }
//         if (st.empty())
//             s.push_back(-1);
//         else
//             s.push_back(st.top());
//         st.push(arr[i]);
//     }
//     // while (!s.empty())
//     // {
//     //     cout << s.back() << " ";
//     //     s.pop_back();
//     // }
//     return 0;
// }
// #include <bits/stdc++.h>

// /****** SAAD A PEACEFUL SOUL ******/

// using namespace std;
// bool Paranthesis(string s)
// {
//     stack<char> st;
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s.at(i) == '{')
//             st.push('{');
//         else if (s.at(i) == '[')
//             st.push('[');
//         else if (s.at(i) == '(')
//             st.push('(');
//         if (st.top() == '(')
//         {
//             if (s.at(i) == ')')
//                 st.pop();
//             else
//                 return false;
//         }
//         if (st.top() == '[')
//         {
//             if (s.at(i) == ']')
//                 st.pop();
//             else
//                 return false;
//         }
//         if (st.top() == '{')
//         {
//             if (s.at(i) == '}')
//                 st.pop();
//             else
//                 return false;
//         }
//     }
//     return (st.empty());
// }
// int main()
// {
//     string s = "()[]";
//     cout << Paranthesis(s);

//     return 0;
// }
// HISTOGRAM
// #include <bits/stdc++.h>

// /****** SAAD A PEACEFUL SOUL ******/

// using namespace std;

// int main()
// {

//     int arr[] = {4, 2, 1, 5, 6, 3, 2, 4, 2};
//     //          9   9
//     int n = sizeof(arr) / sizeof(int);
//     int a[n];
//     stack<int> st;
//     for (int i = 0; i < n; i++)
//     {
//         while (!st.empty())
//         {
//             if (arr[i] <= st.top())
//                 break;
//             st.pop();
//         }
//         if (st.empty())
//             a[i]=-1;
//         else
//             arr[i] = st.top();

//         st.push(i);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<a[i]<<" ";
//     }

//     return 0;
// }
// #include <bits/stdc++.h>

// /****** SAAD A PEACEFUL SOUL ******/

// using namespace std;
// void insAtBot(stack<int>&s1,int ins)
// {
//     if (s1.empty())
//     {   s1.push(ins);
//         return;
//     }
//     int top=s1.top();
//     s1.pop();
//     insAtBot(s1, ins);
//     s1.push(top);
// }
// void reverseSt(stack<int> &s1)
// {

//     if (s1.empty())
//         return;
//     int ele = s1.top();
//     s1.pop();
//     reverseSt(s1);
//     insAtBot(s1,ele);
// }
// int main()
// {

//     stack<int> s1;
//     s1.push(1);
//     s1.push(2);
//     s1.push(3);
//     s1.push(4);
//     s1.push(5);

//     cout<<"\n";
//     reverseSt(s1);
//     for (int i = 0; i < 5; i++)
//     {
//         cout << s1.top() << " ";
//         s1.pop();
//     }

//     return 0;
// }
// #include <bits/stdc++.h>

// /****** SAAD A PEACEFUL SOUL ******/

// using namespace std;

// int main()
// {

//     int arr[] = {1, 3, 2, 4};
//     int ar[4];
//     stack<int> s;
//     int n = 4;
//     for (int i = n - 1; i >= 0; i++)
//     {
//         while (!s.empty())
//         {
//             if (arr[i] < s.top())
//                 break;
//             s.pop();
//         }
//         if (s.empty())
//         {
//             ar[n - i - 1] = -1;
//         }
//         else
//         {
//             ar[n - i - 1] = s.top();
//         }
//         s.push(arr[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << ar[i] << " ";
//     }

//     return 0;
// }
#include<bits/stdc++.h>

/****** SAAD A PEACEFUL SOUL ******/

using namespace std;

int main(){

    stack<int>s;
    s.push(11);
    s.push(2);
    s.push(32);
    s.push(3);
    s.push(41);
    // 11 2 32 3 41
    int n=s.size();
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i]=s.top();
        s.pop();
    }
    sort(arr,arr+n);
    for (int i = 0; i < n; i++)
    {a
        s.push(arr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
       cout<<s.top()<<" ";
       s.pop();
    }
    
    

    return 0;
}
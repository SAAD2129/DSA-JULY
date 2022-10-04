#include<bits/stdc++.h>

#define ll long long
#define lli ll int
#define vi vector<int>
#define vs vector<string>
#define vss vector<vs>
#define vc vector<char>
#define vb vector<bool>
#define vii vector<vi>
#define pii pair<int,int>
#define vpii vector<pii>
#define vip vector<pii>
#define ff first
#define ss second
#define rep(i,a,b) for(int i=a;i<b;i++)
#define SetBits(a) __builtin_popcount(a)
#define SetBitsll(a) __builtin_popcountll(a)
const int N = 1e6+3;
const int MOD = 1e9 + 7;

/*
     ***    Saad a Peaceful soul ⭐⭐⭐⭐⭐⭐⭐ 😁 Zindagi me maza Aana Chahye Bs  ***  
*/

using namespace std;
template<typename T>
class Node
{
     public:
          T data;
          Node *next;
          // Node *random;
          Node() {}
          Node(T val){
               data = val;
               next = NULL;
          }
};
void LinkInsertion(Node<int> *&head, int elem, int pos)
{
     Node<int> *newNode = new Node<int>(elem);
     if (pos == 0){
          // newNode->next = head;
          head = newNode;
          return;
     }
     Node<int> *Pointer = head;
     for (int i = 0; i < pos-1; i++)
     {
          Pointer = Pointer->next;
     }
     newNode->next = Pointer->next;
     Pointer->next = newNode;
}
void PrintLinkedList(Node<int> *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n";
}
Node<int> *ReverseLink(Node<int> *&head)
{
     Node<int> *cur = head;
     Node<int> *prev = NULL;
     while (cur != NULL)
     {
          Node<int> *temp = cur->next;
          cur->next = prev;
          prev = cur;
          cur = temp;
     }
     return prev;
}
Node<int> * Mid(Node<int> *&head){
     Node<int> * slow = head;
     Node<int> * fast = head;
     while(fast->next != NULL && fast != NULL){
          if(slow)
               slow = slow->next;
          fast = fast->next;
          if(fast){
               fast = fast->next;
          }
     }
     return slow;
}
void burn(Node<int> *&head,int data){
     Node<int> *temp = head;
     while (temp->data != data)
     {
          temp = temp->next;
     }
     temp->next = NULL;
}
Node<int>* rearrangeList(Node<int>* head){
    
     Node<int> * mid = Mid(head);
     Node<int> * Reversed = ReverseLink(mid);
     PrintLinkedList(Reversed);
     Node<int>* ans = head;
     // cout << Reversed->next->data << " ";
     while (Reversed != NULL){
          
          Node<int> * temp = head->next;
          Node<int> *antemp = Reversed->next;
          Reversed->next = temp;
          head->next = Reversed;
          Reversed = antemp;
          head = temp;
     }
     
     return ans;
}
void insertAtpos(int pos, Node<int> *&head, int data){

     Node<int> * node = new Node<int>(data);
     if(pos == 0){
          node->next = head;
          head = node;
          return;
     }
     Node <int> *temp = head;
     for (int i = 1; i < pos; i++){
          temp = temp->next;
     }
     cout << "eh";
     temp->next = node;

}
Node<int>* addTwoLists(Node<int>* first, Node<int>* second) {
     
     int carry = 0;
     first = ReverseLink(first);
     second = ReverseLink(second);
     // PrintLinkedList(first);
     // PrintLinkedList(second);
     Node<int> * ansNode = new Node<int>(0);
     int pos = 0; 

     while (first != NULL && second != NULL)
     {
          int sum = first->data + second->data + carry;

          int rem = sum % 10;
          carry = sum / 10;
          cout << rem << endl;
          // insertAtpos(rem, ansNode,pos);
          pos++;
          if(first != NULL)
               first = first->next;
          if(second != NULL)
               second = second->next;
     }
     return ansNode;
     
}
Node<int>* sortList(Node<int> *head)
{
     int zeros = 0, twos = 0, ones = 0;
     Node * newhead = head;
     Node * ans = head;
     while (head!= NULL)
     {
          if(head->data == 0)
               zeros++;
          if(head->data == 1)
               ones++;
          if(head->data == 2)
               twos++;
          head = head->next;
     }
          while (zeros--)
          {
               newhead->data = 0;
               newhead = newhead->next;
          }
          while (ones--)
          {
               newhead->data = 1;
               newhead = newhead->next;
          }
          while (twos--)
          {
               newhead->data = 2;
               newhead = newhead->next;
          }
     
     return ans;

}
//Driver Code 
signed main(){

     Node<int> * h1 = new Node<int>(1);


     LinkInsertion(h1,2,1);
     LinkInsertion(h1,0,2);
     LinkInsertion(h1,1,3);
     LinkInsertion(h1,1,4);
     PrintLinkedList(h1);
     Node<int> * ans = sortList(h1);
     PrintLinkedList(ans);
     // Node<int> * ans = new Node<int>(0);

     // LinkInsertion(ans,5,0);
     // LinkInsertion(ans,5,1);
     // LinkInsertion(ans,5,2);
     // LinkInsertion(ans,5,3);
     // PrintLinkedList(ans);
}
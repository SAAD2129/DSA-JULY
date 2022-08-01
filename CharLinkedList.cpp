#include <bits/stdc++.h>

/****** SAAD A PEACEFUL SOUL ******/

using namespace std;
class Node
{
public:
    char data;
    Node *next;
    Node() {}
    Node(char c)
    {
        data = c;
        next = NULL;
    }
};
void Print(Node *&head)
{   
    while (head != NULL)
    {
        cout << head->data;
        head = head->next;
    }
}

Node *ReverseLink(Node * head)
{
    Node *cur = head;
    Node *prev = NULL;
    while (cur != NULL)
    {
        Node *temp = cur->next;
        cur->next = prev;
        prev = cur;
        cur = temp;
    }
    return prev;
}
Node *Mid(Node *head)
{
    Node *temp = head;
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
bool isPalindorme(Node *head)
{
    if (head == NULL)
        return true;
    if (head->next == NULL)
        return true;
    Node *temp = head;
    Node *mid = Mid(head->next);
    Node *cur = ReverseLink(mid);
    // cout<<cur->data;
    while (cur != NULL)
    {
        if (temp->data != cur->data)
            return false;
        cur = cur->next;
        temp = temp->next;
    }
    return true;
}
int main()
{
    Node *head;
    Node *c1 = new Node('R');
    Node *c2 = new Node('A');
    Node *c3 = new Node('C');
    Node *c4 = new Node('E');
    Node *c5 = new Node('C');
    Node *c6 = new Node('A');
    Node *c7 = new Node('R');
    head = c1;
    // c1->next = c2;
    // c2->next = c3;
    // c3->next = NULL;
    c1->next = c2;
    c2->next = c3;
    c3->next = c4;
    c4->next = c5;
    c5->next = c6;
    c6->next = c7;
    c7->next = NULL;
    // Mid(head);
    // cout << isPalindorme(head);
    // Print(head);
    return 0;
}
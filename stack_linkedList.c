#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

struct Node
{
    int data;
    struct Node *next;
};

int isEmpty(struct stack *ptr)
{

    return ptr->top;
}
int isFull(struct stack *ptr)
{
    return ;
}
void push(struct stack *ptr, int elem)
{
    if (!(isFull(ptr)))
    {
        ptr->top++;
        ptr->arr[ptr->top] = elem;
    }
    else
    {
        printf("Stack overflow\n");
    }
}
void pop(struct stack *ptr)
{
    if (isEmpty(ptr) > 0)
    {
        ptr->top--;
    }
    else
    {
        printf("Stack Underflow\n");
    }
}
int top(struct stack *ptr)
{
    return ptr->arr[ptr->top];
}
int bottom(struct stack *ptr)
{
    return ptr->arr[0];
}
// MAIN EXECUTION STARTS FROM HERE
signed main()
{
    printf("Hey there\n");
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 4;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    // sp->arr[0]=243;
    // sp->top++;
    printf("Stack is Created\n");
    // Empty Checking Function
    // if (isEmpty(sp)==-1)
    // {
    //     printf("The Stack is Empty\n");
    // }
    // else
    // {
    //     printf("The Stack is not Empty\n");
    // }
    // Full Checking Function
    // printf("Pushing the elements to stack\n");
    // int n = 4;
    // for (int i = 0; i < n; i++) // 0/1/2/3/4
    // {
    //     push(sp, i * 3);
    // }
    // printf("Printing the elements to stack\n");
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d\n", sp->arr[i]);
    // }
}
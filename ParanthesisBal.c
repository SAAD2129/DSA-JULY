#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    char *arr;
};
int isEmpty(struct stack *ptr)
{
    if (ptr->top)
    {
        return 1;
    }

    return 0;
}
int isFull(struct stack *ptr)
{
    return (ptr->top == ptr->size);
}
void push(struct stack *ptr, char elem)
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
    if (!(isEmpty(ptr)))
    {
        ptr->top--;
    }
    else
    {
        printf("Stack Underflow\n");
    }
}
// MAIN EXECUTION STARTS FROM HERE
signed main()
{
    printf("Hey there\n");
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 5;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(int));
    char str[] = "(({{})[{{()])}";
    int len = sizeof(str) / sizeof(char);
    printf("Stack is Created &\n");
    printf("%d\n", len);
    for (int i = 0; i < len; i++)
    {
        if (str[i] == '(')
        {
            push(sp, str[i]);
        }
        if (sp->top == ')')
        {
            pop(sp);
        }
        if (sp->top == '}')
        {
            pop(sp);
        }
        if (sp->top == ']')
        {
            pop(sp);
        }
        if (str[i] == '{')
        {
            push(sp, str[i]);
        }
        if (str[i] == '[')
        {
            push(sp, str[i]);
        }
    }
    printf("%d\n",sp->top);
    // for (int i = 0; i < 6; i++)
    // {
    //     printf("%c", sp->arr[i]);
    // }
    // printf("\n");
    // printf("%d\n",sp->top);
    // (sp->top == 0) ? printf("Is balanced\n") : printf("Is unbalanced\n");
}
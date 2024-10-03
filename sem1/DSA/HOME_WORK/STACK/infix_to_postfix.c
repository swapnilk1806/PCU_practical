

#include <stdio.h>
#include <ctype.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(char ch)
{
    stack[++top] = ch;
}

int pop()
{
    if (top == -1)
    {
        return -1;
    }
    else
    {
        return stack[top--];
    }
}

int priority(char ch)
{
    if (ch == '(')
        return 0;

    if (ch == '+' || ch == '-')
        return 1;

    if (ch == '*' || ch == '/')
        return 2;

    return 0;
}

int main()
{
    char exp[MAX];
  char x;
    printf("Enter the expression : ");
    scanf("%s",exp);
    
    char *e;
    e = exp;

    while (*e != '\0')
    {
        if (isalnum(*e))
        {
            printf("%c",*e);
        }else if(*e == '('){
            push(*e);
        }else if(*e == ')'){
            while ((x == pop()) != '(')
            {
                printf("%c",x);
            }
        }else{
            while (priority(stack[top]) >= priority(*e))
            {
                printf("%c",pop());
            }
            push(*e);
        }
        e++;
    }
    while (top != -1)
    {
        printf("%c",pop());
    }
    
    printf("\n");
    return 1;
}
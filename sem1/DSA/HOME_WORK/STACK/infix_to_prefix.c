

#include <stdio.h>
#include <ctype.h>
#include <string.h>

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
    char sample[MAX];
    int count = 0;
    char x;
    printf("Enter the expression : ");
    scanf("%s", sample);

    char name1[MAX];
    strcpy(name1, strrev(sample));
    char *e;
    e = name1;

    while (*e != '\0')
    {
        if (isalnum(*e))
        {
            sample[count++] = *e;
        }
        else if (*e == ')')
        {
            push(*e);
        }
        else if (*e == '(')
        {
            while ((x == pop()) != ')')
            {
                sample[count++] = *e;
            }
        }
        else
        {
            while (priority(stack[top]) >= priority(*e))
            {
                sample[count++] = pop();
            }
            push(*e);
        }
        e++;
    }
    while (top != -1)
    {
        sample[count++] = pop();
    }
    
    for (int i= count-1; i>=0; i--)
    {
        printf("%c",sample[i]);
    }
    
    printf("\n");
    return 1;
}
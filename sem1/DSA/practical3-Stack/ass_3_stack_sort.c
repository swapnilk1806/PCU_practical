

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int value)
{
    if (MAX == top - 1)
    {
        printf("Stack is Overflow \n");
        return;
    }
    stack[++top] = value;
}

int pop()
{
    if (top == -1)
    {
        printf("Stack is Underflow");
        return -1;
    }
    return stack[top--];
}

void display(){
    int num = top+1;
  printf("\nDisplay elements \n");
    for (int i = 0; i < num; i++)
    {
        printf("%d  ",stack[i]);
    }
    printf("\n");
}

void sorting(){
    int arr[top+1];
    int num = top+1;

    for (int i = 0; i < num; i++)
    {
        arr[i] = stack[i];
    }
    
    for (int i = 0; i < num-1; i++)
    {
        for (int j=0; j< num-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("\nSortig Display\n");
    for (int  i = 0; i < num; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
}

int main()
{
    int ch;
    int key;

    while (1)
    {
        printf("\n--------------------\n");
        printf("1. Push elements \n");
        printf("2. Pop elements \n");
        printf("3  display \n");
        printf("4. Sorting is staack ele\n");
        printf("5. Exit \n");
        

        printf("Enter choose op : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
              printf("Enter elemet : ");
              scanf("%d",&key);
              push(key);
            break;
        
        case 2:
              printf("Pop elements is : %d \n",pop());
              break;
        
        case 3:
             display();
             break;
        
        case 4: 
              sorting();
              break;

        case 5 : exit(0);
             break;
            
        default : return 1;
        }
    }

    return 1;
}
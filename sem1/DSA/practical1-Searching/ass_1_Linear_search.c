

#include<stdio.h>

#define MAX 100
int main(){
    int arr[MAX];
    int num;
    int flag = 0,count;

    printf("Enter How many insert ele : ");
    scanf("%d",&num);

    for (int i = 0; i < num; i++)
    {
        printf("%d : ");
        scanf("%d",&arr[i]);
    }

    int key_elements;
    printf("Enter key elements : ");
    scanf("%d",&key_elements);

    for (int i = 0; i < num; i++)
    {
        if(arr[i] == key_elements){
           flag = 1;

           count++;
        }
    }
    
    if(flag == 0){
        printf("Element is not found\n\n");
    }else{
        printf("Elements %d is found ",key_elements);
        printf("Total numbers occurance : %d \n",count);
    }
    
    return ;
}
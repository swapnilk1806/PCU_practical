
#include<stdio.h>
#include<stdlib.h>

#define MAX 100


int partion(int arr[],int lb,int ub){
    
    int pivot = arr[lb];
    int down = lb;
    int up = ub;

    loop:

    while (arr[down] <= pivot && down<=ub)
    {
        down++;
    }
    
    while ((arr[up] >=  pivot) && up>lb )
    {
        up--;
    }
    if (down < up)
    {
        int temp =  arr[down];
        arr[down] = arr[up];
        arr[up] = temp;
        goto loop;
    }

    arr[lb] = arr[up];
    arr[up] = pivot;
    
    return up;
}

void Q_sort(int arr[],int low,int high){
    if (low < high)
    {
        int j = partion(arr,low,high);
        Q_sort(arr,low,j-1);
        Q_sort(arr,j+1,high);
    }    
}


int main(){
    int num;
    int arr[MAX];

    printf("Enter How many Numbers : ");
    scanf("%d",&num);

    for (int i = 0; i < num; i++)
    {
        printf("%d : ",i+1);
        scanf("%d",&arr[i]);
    }

    Q_sort(arr,0,num-1);

    printf("\nSorting Display \n");
    for (int i = 0; i < num; i++)
    {
        printf("%d  ",arr[i]);
    }

    printf("\n");
    return 1;
}
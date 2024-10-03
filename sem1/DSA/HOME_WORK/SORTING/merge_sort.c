

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void merge(int arr[], int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;

    int k = 0;
    int temp[MAX];
    
    while ((i <= mid) && (j <= high))
    {
        if (arr[i] < arr[j])
        {
              temp[k] = arr[i];
              i++;
              k++;
        }else{
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    
    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while (j <= high)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }
    
    for (i=low, k=0;  i<= high; i++,k++)
    {
        arr[i] = temp[k];
    }
    
}

void merge_sort(int arr[], int low, int high)
{

    if (low < high)
    {
        int mid = (low + high) / 2;

        merge_sort(arr, low, mid);
        merge_sort(arr, mid + 1, high);

        merge(arr, low, mid, high);
    }
}

int main()
{
    int arr[MAX];
    int num;

    printf("Enter How many Numbers : ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        printf("%d  : ", i + 1);
        scanf("%d", &arr[i]);
    }

    merge_sort(arr, 0, num - 1);

    printf("\nSOrting display \n");

    for (int i = 0; i < num; i++)
    {
        printf("%d  ", arr[i]);
    }

    printf("\n");
    return 1;
}
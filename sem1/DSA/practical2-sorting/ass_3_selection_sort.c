

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void bubble(int arr[], int num)
{
   
   for (int i = 0; i < num; i++)
   {
     for (int j=0; j<(num-i-1); j++ )
     {
      if (arr[j] > arr[j+1])
      {
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
     }
   }
}

int main()
{
    int arr[MAX];
    int num;

    printf("Enter How many elements : ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        printf("%d : ", i + 1);
        scanf("%d", arr[i]);
    }

    bubble(arr, num);

    printf("Display Bubble sort result \n");
    for (int i = 0; i < num; i++)
    {
        printf("%d   ", arr[i]);
    }

    printf("\n");
    return 1;
}
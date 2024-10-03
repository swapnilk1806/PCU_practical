

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void bubble(int arr[], int num)
{
   
   for (int i = 0; i < num; i++)
   {
      int key = arr[i];
      int j = i+1;

      while (j>= 0 && arr[j] > key)
      {
        arr[j+1] = arr[j];
      j--;
      }
      arr[j+1] = key;
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
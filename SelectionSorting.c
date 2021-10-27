#include <stdio.h>

void SelSort(int arr[50], int size);

int main()
{
    system("cls");
    int arr[50], index, size;
    printf("Enter the desired array size (upto 50):\n");
    scanf("%d", &size);
    printf("Enter the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);        
    }
    SelSort(arr, size);
    return 0;
}
void SelSort(int arr[50], int n)
{
    int i, j, min, swap;
    for (i = 0; i < n-1; i++)
    {
        min = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min])
            min = j;
        
        swap = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = swap;
    }
}
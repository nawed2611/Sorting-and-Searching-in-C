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
void SelSort(int arr[50], int size)
{
    
}
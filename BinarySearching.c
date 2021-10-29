#include <stdio.h>
#include <conio.h>
int main()
{
    system("cls");
    int size, item;
    printf("Enter the number of items:\n ");
    scanf("%d", &size);
    int arr[size];
    printf("\nEnter sorted array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter element to be searched:\n ");
    scanf("%d", &item);
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        for (int i = 0; i < size; i++)
        {
            int mid = (low + high) / 2;
            if (arr[mid] == item)
            {
                printf("\nElement %d found at position %d", item, mid);
                return;
            }
            else if (item > arr[mid])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    printf("Element %d not found", item);
    getch();
}
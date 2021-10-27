#include <stdio.h>
#include <limits.h>
void InsSort(int ar[50], int size);
int main()
{
    system("cls");
    int arr[50], item, n, index, i;
    printf("\nEnter desired array size (upto 50):\n");
    scanf("%d", &n);
    printf("\nEnter array elements:\n");
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    InsSort(arr, n);
    printf("\nSorted array:\n");
    for (i = 1; i <= n; i++)
    {
        printf("%d\t", arr[i]);
    }
    getch();
    return 0;
}
void InsSort(int arr[50], int size)
{
    int temp, j;
    arr[0] = INT_MIN;
    for (int i = 1; i <= size; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (temp < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

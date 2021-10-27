#include <stdio.h>

void BubSort(int arr[50], int n);

int main()
{
    system("cls");
    int arr[50], n;
    printf("Enter the desired array size(upto 50):\n");
    scanf("%d", &n);

    printf("Enter the array:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    BubSort(arr, n);

    printf("Sorted Array:\n");
    for (int i = 0; i < n; i++)
        printf("%d\t", arr[i]);

    return 0;
}
void BubSort(int arr[50], int n)
{
    int swap;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = swap;
            }
        }
    }
}

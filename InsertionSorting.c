#include <stdio.h>
#include <conio.h>
#include <limits.h>
int InsSort(int ar[50], int size);
void main()
{
    system("cls");
    int ar[50], item, n, index,i;
    printf("\nEnter desired array size: ");
    scanf("%d", &n);
    printf("\nEnter array elements\n");
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &ar[i]);
    }
    InsSort(ar, n);
    printf("\nSorted array is:\n");
    for (i = 1; i <= n; i++)
    {
        printf("%d\t", ar[i]);
    }
    getch();
}
int InsSort(int ar[50], int size)
{
    int temp, j;
    ar[0] = INT_MIN;
    for (int i = 1; i <= size; i++)
    {
        temp = ar[i];
        j = i - 1;
        while (temp < ar[j])
        {
            ar[j + 1] = ar[j];
            j--;
        }
        ar[j + 1] = temp;
    }
}

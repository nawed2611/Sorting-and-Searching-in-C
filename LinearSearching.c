#include <stdio.h>
#include <conio.h>
int Linearsearch(int ar[50], int size, int item);
void main()
{
    system("cls");
    int ar[50], item, n, index;
    printf("\nEnter desired array size: ");
    scanf("%d", &n);
    printf("\nEnter array elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    printf("\nEnter the number you want to search\n");
    scanf("%d", &item);
    index = Linearsearch(ar, n, item);
    if (index == -1)
    {
        printf("\nGiven element not found");
    }
    else
    {
        printf("\nElement %d found at index %d", item, index);
    }
    getch();
}
int Linearsearch(int ar[50], int size, int item)
{
    for (int i = 0; i < size; i++)
    {
        if (ar[i] == item)
            return i;
    }
    return -1;
}

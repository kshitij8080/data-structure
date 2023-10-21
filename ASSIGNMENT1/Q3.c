#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
void copyArray(int arr[], int cpyArr[], int n);
int main()
{
    int arr[20], b[20];
    int i, n;
    printf("Enter the size of array \n");
    scanf("%d", &n);
    printf("Enter the array Elements \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    copyArray(arr, b, n);
    printf("Copied of array element :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", b[i]);
    }
    getch();
    return 0;
}
void copyArray(int arr[], int cpyArr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cpyArr[i] = arr[i];
    }
}
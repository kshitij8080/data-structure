#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
 
void displaySquare(int arr[], int squareArr[], int n);
 
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
 
    displaySquare(arr, b, n); // calling 1.main array 2.square array 3. size of array.
 
    printf("Square of array element :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", b[i]);
    }
 
    getch();
    return 0;
}
 
void displaySquare(int arr[], int squareArr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        squareArr[i] = arr[i] * arr[i];
    }
}
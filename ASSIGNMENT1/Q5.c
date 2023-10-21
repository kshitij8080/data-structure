#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int find_value(int arr[], int size, int num);
void displayArray(int arr[], int size);
 
int main()
{
    int arr[20];
    int n, f_value, rep_value, result;
 
    printf("Enter the size of array : \n");
    scanf("%d", &n);
 
    printf("Enter the array elements : \n");
    for (int i = 0; i < n; i++)
    {
        printf("index[%d] : ", i);
        scanf("%d", &arr[i]);
    }
 
    displayArray(arr, n);
 
    printf("\nEnter the find value in the array : \n");
    scanf("%d", &f_value);
 
    result = find_value(arr, n, f_value);
 
    if (result < 0)
    {
        printf("The element is not found !!");
    }
    else
    {
        printf("The element in found at %d index !!\n", result);
        // replace value
        printf("Enter the replace value : \n");
        scanf("%d", &rep_value);
        arr[result] = rep_value;
        displayArray(arr, n);
    }
    getch();
    return 0;
}
 
int find_value(int arr[], int size, int num)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            return i;
        }
    }
 
    return -1;
}
 
void displayArray(int arr[], int size)
{
    printf("Array is : \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
}
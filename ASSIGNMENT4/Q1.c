#include <stdio.h>

#include <conio.h>

#include <stdlib.h>

#include <string.h>

 

int search(int arr[], int size, int value);

 

int main()

{

    int arr[10];

    int i, n, value, size, result;

 

    printf("Enter the size of array : \n");

    scanf("%d", &n);

 

    printf("Enter element in Array :\n");

    for (i = 0; i < n; i++)

    {

        printf("Enter the value of index[%d] : ", i);

        scanf("%d", &arr[i]);

    }

 

    printf("\nEnter the integer Searching Element : ");

    scanf("%d", &value);

 

    size = i;

 

    search(arr, size, value);

    if (result < 0)

    {

        printf("The element is not found !! \n");

    }

    else

    {

        printf("The element is found !!");

    }

    getch();

    return 0;

}

 

int search(int arr[], int size, int value)

{

    int i;

 

    for (i = 0; i < size; i++)

    {

        if (arr[i] == value)

        {

            return i;

        }

    }

 

    return -1;

}
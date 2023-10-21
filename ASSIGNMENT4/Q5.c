#include <stdio.h>

#include <conio.h>

#include <stdlib.h>

#include <string.h>

 

int binarySearch(int arr[], int low, int high, int value);

 

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

    result = binarySearch(arr, 0, size, value);

 

    if (result < 0)

    {

        printf("The Element is not Found !!");

    }

    else

    {

        printf("The element is found at %d position", result + 1);

    }

    getch();

    return 0;

}

 

int binarySearch(int arr[], int low, int high, int value)

{

    int mid;

 

    while (low <= high)

    {

        mid = (low + high) / 2;

 

        if (arr[mid] == value)

        {

            return mid;

        }

 

        if (mid < value)

        {

            low = mid + 1;

        }

        else

        {

            high = mid - 1;

        }

    }

 

    return -1;

}
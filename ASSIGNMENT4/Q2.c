#include <stdio.h>

#include <conio.h>

#include <stdlib.h>

#include <string.h>

 

void mergeSort(int arr[], int low, int high);

void merge(int arr[], int low, int mid, int high);

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

 

    mergeSort(arr, 0, n - 1);

 

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

 

void mergeSort(int arr[], int low, int high)

{

    int mid;

 

    if (low < high)

    {

        mid = (low + high) / 2;

        mergeSort(arr, low, mid);

        mergeSort(arr, mid + 1, high);

        merge(arr, low, mid, high);

    }

}

 

void merge(int arr[], int low, int mid, int high)

{

    int i, j, k, copy[10];

    i = low;

    j = mid + 1;

    k = 0;

 

    while (i <= mid && j <= high)

    {

        if (arr[i] < arr[j])

        {

            copy[k++] = arr[i++];

        }

        else

        {

            copy[k++] = arr[j++];

        }

    }

 

    while (i <= mid)

    {

        copy[k++] = arr[i++];

    }

    while (j <= high)

    {

        copy[k++] = arr[j++];

    }

 

    for (int j = low, k = 0; j <= high; k++, j++)

    {

        arr[j] = copy[k];

    }

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
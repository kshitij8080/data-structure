#include <stdio.h>

#include <conio.h>

#include <stdlib.h>

#include <string.h>

 

int main()

{

    int a[20], i, n;

 

    printf("Enter the size of Array  : ");

    scanf("%d", &n);

    printf("Enter the  array element : \n");

 

    for (i = 0; i < n; i++)

    {

        printf("Array index[%d] : ", i);

        scanf("%d", &a[i]);

    }

 

    quickSort(a, 0, n - 1);

 

    printf("Sorted Array is : \n");

    for (i = 0; i < n; i++)

    {

        printf("\t %d", a[i]);

    }

    getch();

    return 0;

}

 

void quickSort(int arr[], int low, int high)

{

    int j;

 

    if (low < high)

    {

        j = partitionArray(arr, low, high);

        quickSort(arr, low, j - 1);

        quickSort(arr, j + 1, high);

    }

}

 

int partitionArray(int arr[], int low, int high)

{

    int pivot, temp;

    int i, j;

 

    i = low + 1;

    j = high;

    pivot = arr[low];

 

    do

    {

        while (arr[i] < pivot && i <= high)

        {

            i++;

        }

 

        while (arr[j] > pivot && j >= low)

        {

            j--;

        }

 

        if (i < j)

        {

            temp = arr[i];

            arr[i] = arr[j];

            arr[j] = temp;

        }

    } while (i < j);

 

    arr[low] = arr[j];

    arr[j] = pivot;

 

    return j;

}
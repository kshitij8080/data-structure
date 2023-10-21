#include <stdio.h>

#include <conio.h>

#include <stdlib.h>

#include <string.h>

 

// function declaration

 

void merge(int arr[], int firstIndex, int midIndex, int lastIndex);

void mergeSort(int arr[], int firstIndex, int lastIndex);

 

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

 

    mergeSort(a, 0, n - 1);

 

    printf("Sorted Array is : \n");

    for (i = 0; i < n; i++)

    {

        printf("\t %d", a[i]);

    }

 

    getch();

 

    return 0;

}

 

// Function definition

void merge(int arr[], int firstIndex, int midIndex, int lastIndex)

{

 

    int i, j, k, b[20];

    i = firstIndex;

    j = midIndex + 1;

    k = 0;

    while (i <= midIndex && j <= lastIndex)

 

    {

 

        if (arr[i] < arr[j])

        {

            b[k++] = arr[j++];

        }

        else

 

        {

            b[k++] = arr[i++];

        }

    }

    while (i <= midIndex)

 

    {

        b[k++] = arr[i++];

    }

 

    while (j <= lastIndex)

    {

        b[k++] = arr[j++];

    }

 

    // copy the b array into original array (arr[])

    for (j = firstIndex, k = 0; j <= lastIndex; j++, k++)

    {

        arr[j] = b[k];

    }

}

 

void mergeSort(int arr[], int firstIndex, int lastIndex)

{

    int mid;

 

    if (firstIndex < lastIndex)

    {

 

        mid = (firstIndex + lastIndex) / 2;

        mergeSort(arr, firstIndex, mid);

        mergeSort(arr, mid + 1, lastIndex);

        merge(arr, firstIndex, mid, lastIndex);

    }

}
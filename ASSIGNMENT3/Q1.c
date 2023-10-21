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

 

    mergeSort(a, 0, n - 1);

 

    printf("Sorted Array is : \n");

    for (i = 0; i < n; i++)

    {

        printf("\t %d", a[i]);

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

    int i, j, k, arr2[20];

    i = low;

    j = mid + 1;

    k = 0;

 

    while (i <= mid && j <= high)

    {

        if (arr[i] < arr[j])

        {

            arr2[k++] = arr[i++];

        }

        else

        {

            arr2[k++] = arr[j++];

        }

    }

 

    while (i <= mid)

    {

        arr2[k++] = arr[i++];

    }

 

    while (j <= high)

    {

        arr2[k++] = arr[j++];

    }

 

    for (i = low, k = 0; i <= high; i++, k++)

    {

        arr[i] = arr2[k];

    }

}
#include <stdio.h>

#include <conio.h>

#include <stdlib.h>

#include <string.h>

#define MaxLen 20

 

void strMergeSort(char str[][MaxLen], int low, int high);

void mergeStr(char str[][MaxLen], int low, int mid, int high);

 

int n; // Global variable

 

int main()

{

    int i;

 

    printf("Enter the at least 5 words ending with at and an : \n");

    scanf("%d", &n);

 

    char str[n][MaxLen]; // string Array

 

    printf("Enter the Elements : \n");

    for (i = 0; i < n; i++)

    {

        printf("index[%d] : ", i);

        scanf("%s", &str[i]);

    }

 

    strMergeSort(str, 0, n - 1); // function call

 

    printf("Sorted Array is : \n");

    for (i = 0; i < n; i++)

    {

        printf("%s \n", str[i]);

    }

 

    getch();

    return 0;

}

 

void strMergeSort(char str[][MaxLen], int low, int high)

{

    int mid;

 

    if (low < high)

    {

        mid = (low + high) / 2;

        strMergeSort(str, low, mid);

        strMergeSort(str, mid + 1, high);

        mergeStr(str, low, mid, high);

    }

}

 

void mergeStr(char str[][MaxLen], int low, int mid, int high)

{

    char cpy[n][MaxLen];

    int i, j, k;

    i = low;

    j = mid + 1;

    k = 0;

 

    while (i <= mid && j <= high)

    {

        if (strcmp(str[i], str[j]) > 0)

        {

            strcpy(cpy[k++], str[j++]);

        }

        else

        {

            strcpy(cpy[k++], str[i++]);

        }

    }

 

    while (i <= mid)

    {

        strcpy(cpy[k++], str[i++]);

    }

 

    while (j <= high)

    {

        strcpy(cpy[k++], str[j++]);

    }

 

    for (i = low, k = 0; i <= high; k++, i++)

    {

        strcpy(str[i], cpy[k]);

    }

}
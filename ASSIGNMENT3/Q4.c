#include <stdio.h>

#include <conio.h>

#include <stdlib.h>

#include <string.h>

#define MaxLen 20

void strQuickSort(char str[][MaxLen], int low, int high);

int partitionStrArray(char str[][MaxLen], int low, int high);

 

int main()

{

    int i, n;

 

    printf("Enter the min 6 months or more : \n");

    scanf("%d", &n);

 

    char str[n][MaxLen]; // string Array

 

    printf("Enter the months name : \n");

    for (i = 0; i < n; i++)

    {

        printf("index[%d] : ", i);

        scanf("%s", &str[i]);

    }

 

    strQuickSort(str, 0, n - 1); // function call

 

    printf("Sorted Array is : \n");

    for (i = 0; i < n; i++)

    {

        printf("%s \n", str[i]);

    }

 

    getch();

    return 0;

}

 

void strQuickSort(char str[][MaxLen], int low, int high)

{

 

    int j;

 

    if (low < high)

    {

        j = partitionStrArray(str, low, high);

        strQuickSort(str, low, j - 1);

        strQuickSort(str, j + 1, high);

        printf("if called \n");

    }

    printf("main called \n");

}

 

int partitionStrArray(char str[][MaxLen], int low, int high)

{

    int i, j;

    char pivot[MaxLen], temp[MaxLen];

    i = low + 1;

    j = high;

    strcpy(pivot, str[low]);

 

    do

    {

        while (strcmp(str[i], pivot) == -1 && i <= high)

        {

            i++;

        }

 

        while (strcmp(str[j], pivot) == 1 && j >= low)

        {

            j--;

        }

 

        if (i < j)

        {

            strcpy(temp, str[i]);

            strcpy(str[i], str[j]);

            strcpy(str[j], temp);

        }

 

    } while (i < j);

 

    strcpy(str[low], str[j]);

    strcpy(str[j], pivot);

 

    return j;

}
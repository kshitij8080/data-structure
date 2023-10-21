#include <stdio.h>

#include <conio.h>

#include <stdlib.h>

#include <string.h>

#define Max_Len 20

 

struct person

{

    int per_no;

    char name[Max_Len];

    int age;

};

 

void mergeSort(struct person arr[], int low, int high);

void merge(struct person arr[], int low, int mid, int high);

 

int main()

{

    FILE *fptr;

    int i, size;

    struct person p1[Max_Len];

    fptr = fopen("01_person.txt", "r");

 

    if (fptr == NULL)

    {

        printf("File not Found !");

        return 0;

    }

 

    for (i = 0; !feof(fptr); i++)

    {

        fscanf(fptr, "%d %s %d", &p1[i].per_no, &p1[i].name, &p1[i].age);

        printf("%d %s %d \n", p1[i].per_no, p1[i].name, p1[i].age);

    }

 

    size = i;

 

    mergeSort(p1, 0, size - 1);

 

    printf("\nSorted Array is : \n");

    for (i = 0; i < size; i++)

    {

        printf("%d %s %d \n", p1[i].per_no, p1[i].name, p1[i].age);

    }

 

    fptr = fopen("01_person.txt", "a");

    fprintf(fptr, "\n Sorted Records is :\n");

    for (int j = 0; j < size; j++)

    {

        fprintf(fptr, "%d %s %d \n", p1[j].per_no, p1[j].name, p1[j].age);

    }

 

    fclose(fptr);

    getch();

    return 0;

}

 

void mergeSort(struct person arr[], int low, int high)

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

 

void merge(struct person arr[], int low, int mid, int high)

{

    int i, j, k;

    struct person cpy[Max_Len];

    i = low;

    j = mid + 1;

    k = 0;

 

    while (i <= mid && j <= high)

    {

        if (arr[i].age < arr[j].age)

        {

            cpy[k++] = arr[i++];

        }

        else

        {

            cpy[k++] = arr[j++];

        }

    }

 

    while (i <= mid)

    {

        cpy[k++] = arr[i++];

    }

    while (j <= high)

    {

        cpy[k++] = arr[j++];

    }

 

    for (i = low, k = 0; i <= high; k++, i++)

    {

        arr[i] = cpy[k];

    }

}
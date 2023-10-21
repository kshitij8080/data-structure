#include <stdio.h>

#include <conio.h>

#include <stdlib.h>

#include <string.h>

#define Max_Len 20

 

struct student

{

    int roll_no;

    char name[Max_Len];

    int age;

};

 

void mergeSort(struct student arr[], int low, int high);

void merge(struct student arr[], int low, int mid, int high);

 

int main()

{

    FILE *fptr, *fp;

    int i, size;

    struct student s1[Max_Len];

 

    fptr = fopen("03_student.txt", "r");

 

    for (i = 0; !feof(fptr); i++)

    {

        fscanf(fptr, "%d %s %d", &s1[i].roll_no, &s1[i].name, &s1[i].age);

        printf("%d %s %d\n", s1[i].roll_no, s1[i].name, s1[i].age);

    }

 

    size = i;

 

    mergeSort(s1, 0, size - 1);

 

    fp = fopen("sort_student_name.txt", "w");

 

    fprintf(fp, "Sorted Student Records is : \n");

    for (i = 0; i < size; i++)

    {

        fprintf(fp, "%d %s %d\n", s1[i].roll_no, s1[i].name, s1[i].age);

    }

 

    printf("\nSorted Array element is : \n");

    for (int j = 0; j < size; j++)

    {

        printf("%d %s %d\n", s1[j].roll_no, s1[j].name, s1[j].age);

    }

 

    fclose(fptr);

    fclose(fp);

    getch();

    return 0;

}

 

void mergeSort(struct student arr[], int low, int high)

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

 

void merge(struct student arr[], int low, int mid, int high)

{

    int i, j, k;

    struct student copy[Max_Len];

    i = low;

    j = mid + 1;

    k = 0;

 

    while (i <= mid && j <= high)

    {

        if (strcmp(arr[i].name, arr[j].name) > 0)

        {

            copy[k++] = arr[j++];

        }

        else

        {

            copy[k++] = arr[i++];

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

 

    for (i = low, k = 0; i <= high; i++, k++)

    {

        arr[i] = copy[k];

    }

}
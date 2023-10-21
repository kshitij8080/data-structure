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

 

// Function Declaration

void quickSort(struct student arr[], int low, int high);

int partitionArray(struct student arr[], int low, int high);

 

int main()

{

    FILE *fp;

    int i, size;

    struct student s1[Max_Len];

 

    fp = fopen("02_student.txt", "r");

 

    if (fp == NULL)

    {

        printf("File does not exist\n");

        return 1;

    }

 

    for (i = 0; !feof(fp); i++)

    {

        fscanf(fp, "%d %s %d", &s1[i].roll_no, &s1[i].name, &s1[i].age);

        printf("%d %s %d\n", s1[i].roll_no, s1[i].name, s1[i].age);

    }

 

    size = i;

 

    quickSort(s1, 0, size - 1);

 

    printf("Sorted Array is : \n");

    for (i = 0; i < size; i++)

    {

        printf("%d %s %d\n", s1[i].roll_no, s1[i].name, s1[i].age);

    }

 

    fp = fopen("02_student.txt", "a");

    fprintf(fp, "\n Sorted Elements is : \n");

    for (i = 0; i < size; i++)

    {

        fprintf(fp, "%d %s %d\n", s1[i].roll_no, s1[i].name, s1[i].age);

    }

 

    fclose(fp);

    getch();

    return 0;

}

 

void quickSort(struct student arr[], int low, int high)

{

    int j;

 

    if (low < high)

    {

        j = partitionArray(arr, low, high);

        quickSort(arr, low, j - 1);

        quickSort(arr, j + 1, high);

    }

}

 

int partitionArray(struct student arr[], int low, int high)

{

    int i, j;

    struct student pivot, temp;

 

    pivot = arr[low];

    i = low + 1;

    j = high;

 

    do

    {

 

        while (arr[i].age < pivot.age && i <= high)

        {

            i++;

        }

 

        while (arr[j].age > pivot.age && j >= low)

        {

            j--;

        }

 

        if (i < j)

        {

            temp = arr[j];

            arr[j] = arr[i];

            arr[i] = temp;

        }

 

    } while (i < j);

 

    arr[low] = arr[j];

    arr[j] = pivot;

    return j;

}
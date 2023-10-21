#include <stdio.h>

#include <conio.h>

#include <stdlib.h>

#include <string.h>

#define max_len 20

 

struct student

{

    int roll_no;

    char name[max_len];

};

 

int binarySearch(struct student arr[], int low, int high, char f_value[]);

 

int main()

{

    FILE *fp;

    char f_value[max_len];

    struct student stud[max_len];

    int i = 0, size, result;

 

    fp = fopen("02_student.txt", "r");

 

    for (i = 0; !feof(fp); i++)

    {

        fscanf(fp, "%d %s", &stud[i].roll_no, &stud[i].name);

        printf("%d %s\n", stud[i].roll_no, stud[i].name);

    }

 

    printf("Enter the Student name for Search : \n");

    scanf("%s", f_value);

 

    size = i;

    result = binarySearch(stud, 0, size, f_value);

    if (result < 0)

    {

        printf("The City is not found !! \n");

    }

    else

    {

        printf("The City is found at %d position\n", result + 1);

        printf("The Student is %s that roll no. is %d", stud[result].name, stud[result].roll_no);

    }

 

    fclose(fp);

    getch();

    return 0;

}

 

int binarySearch(struct student arr[], int low, int high, char f_value[])

{

    int mid, cmp;

 

    while (low <= high)

    {

        mid = (low + high) / 2;

        cmp = strcmp(arr[mid].name, f_value);

 

        if (cmp == 0)

        {

            return mid;

        }

 

        if (cmp < 0)

        {

            low = mid + 1;

        }

 

        if (cmp > 0)

        {

            high = mid - 1;

        }

    }

 

    return -1;

}
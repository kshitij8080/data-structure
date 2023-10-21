#include <stdio.h>

#include <conio.h>

#include <stdlib.h>

#include <string.h>

 

int search(char arr[][10], int size, char value[]);

 

int main()

{

    int n, i, result;

    char value[10];

    printf("Enter the size of Array : \n");

    scanf("%d", &n);

    char name[n][10];

 

    printf("Enter the names of Cities : \n");

    for (i = 0; i < n; i++)

    {

        printf("Enter %d value : ", i + 1);

        scanf("%s", name[i]);

    }

 

    printf("Enter the City for Searching : \n");

    scanf("%s", value);

 

    result = search(name, n, value);

 

    if (result < 0)

    {

        printf("The City is not Found !!");

    }

    else

    {

        printf("The City id Found at %d position !!", result + 1);

    }

 

    getch();

    return 0;

}

 

int search(char arr[][10], int size, char value[])

{

    int i;

    for (i = 0; i < size; i++)

    {

        if (strcmp(arr[i], value) == 0)

        {

            return i;

        }

    }

 

    return -1;

}
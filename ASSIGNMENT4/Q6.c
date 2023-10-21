#include <stdio.h>

#include <conio.h>

#include <stdlib.h>

#include <string.h>

#define max_len 20

 

struct city

{

    char name[max_len];

    int STD;

};

 

int search(struct city arr[], int size, char f_value[]);

 

int main()

{

    FILE *fp;

    char f_value[max_len];

    struct city name[max_len];

    int i = 0, size, result;

 

    fp = fopen("03_sortedCities.txt", "r");

 

    for (i = 0; !feof(fp); i++)

    {

        fscanf(fp, "%s %d", &name[i].name, &name[i].STD);

    }

 

    printf("Enter the City name for Search : \n");

    scanf("%s", f_value);

 

    size = i;

    result = search(name, size, f_value);

 

    if (result < 0)

    {

        printf("The City is not found !! \n");

    }

    else

    {

        printf("The City is found at %d position\n", result + 1);

        printf("The City is %s that STD code is %d", name[result].name, name[result].STD);

    }

 

    fclose(fp);

    getch();

    return 0;

}

 

int search(struct city arr[], int size, char f_value[])

{

    for (int i = 0; i < size; i++)

    {

        if (strcmp(arr[i].name, f_value) == 0)

        {

            return i;

        }

    }

 

    return -1;

}
#include <stdio.h>

#include <conio.h>

#include <stdlib.h>

#include <string.h>

#define max_len 20

 

struct city

{

    char cities[max_len];

    int STD;

};

 

int binarySearch(struct city arr[], int low, int high, char f_value[]);

 

int main()

{

    FILE *fp;

    char f_value[max_len];

    struct city city_name[max_len];

    int i = 0, size, result;

 

    fp = fopen("01_cities.txt", "r");

 

    for (i = 0; !feof(fp); i++)

    {

        fscanf(fp, "%s %d", &city_name[i].cities, &city_name[i].STD);

        printf("%s %d\n", city_name[i].cities, city_name[i].STD);

    }

 

    printf("Enter the City cities for Search : \n");

    scanf("%s", f_value);

 

    size = i;

    result = binarySearch(city_name, 0, size, f_value);

    if (result < 0)

    {

        printf("The City is not found !! \n");

    }

    else

    {

        printf("The City is found at %d position\n", result + 1);

        printf("The City is %s that STD code is %d", city_name[result].cities, city_name[result].STD);

    }

 

    fclose(fp);

    getch();

    return 0;

}

 

int binarySearch(struct city arr[], int low, int high, char f_value[])

{

    int mid, cmp;

 

    while (low <= high)

    {

        mid = (low + high) / 2;

        cmp = strcmp(arr[mid].cities, f_value);

 

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
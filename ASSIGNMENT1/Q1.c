#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int arr[] = {1, 1, 2, 2, 2, 2, 3};
    int x = 2, count = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }
    printf("Occurs %d time in arr[] \n", count);
   
}
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    printf("Enter the highest power of the polynomial : ");
    scanf("%d", &n);
    int arr[n + 1];
    for (int i = 0; i <= n; i++)
    {
        printf("Enter the coefficient for x^%d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("Polynomial : ");
    for (int i = n; i >= 0; i--)
    {
        if (arr[i] != 0)
        {
            if (i == n)
                printf("%dx^%d", arr[i], i);
            else if (i == 1)
                printf("+%dx", arr[i]);
            else if (i == 0)
                printf("+%d", arr[i]);
            else
                printf("+%dx^%d", arr[i], i);
        }
    }
    getch();
    return 0;
}
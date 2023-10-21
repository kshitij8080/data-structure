#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
 
int n;
int main()
{
    printf("Enter the highest power of the polynomial : ");
    scanf("%d", &n);
    int poly1[n], poly2[n], result[n];
 
    printf("Enter the First Polynomial : \n");
    for (int i = 0; i <= n; i++)
    {
        printf("Enter the coefficient for x^%d : ", i);
        scanf("%d", &poly1[i]);
    }
 
    printf("Enter the Second Polynomial : \n");
    for (int i = 0; i <= n; i++)
    {
        printf("Enter the coefficient for x^%d : ", i);
        scanf("%d", &poly2[i]);
    }
 
    printf("First Polynomial : ");
    for (int i = n; i >= 0; i--)
    {
        if (poly1[i] != 0)
        {
            if (i == n)
                printf("%dx^%d", poly1[i], i);
            else if (i == 1)
                printf("+%dx", poly1[i]);
            else if (i == 0)
                printf("+%d", poly1[i]);
            else
                printf("+%dx^%d", poly1[i], i);
        }
    }
 
    printf("\n Second Polynomial : ");
    for (int i = n; i >= 0; i--)
    {
        if (poly2[i] != 0)
        {
            if (i == n)
                printf("%dx^%d", poly2[i], i);
            else if (i == 1)
                printf("+%dx", poly2[i]);
            else if (i == 0)
                printf("+%d", poly2[i]);
            else
                printf("+%dx^%d", poly2[i], i);
        }
    }
 
    printf("\n Addition of Polynomial :");
    for (int i = n; i >= 0; i--)
    {
        result[i] = poly1[i] + poly2[i];
        if (result[i] != 0)
        {
            if (i == n)
                printf("%dx^%d", result[i], i);
            else if (i == 1)
                printf("+%dx", result[i]);
            else if (i == 0)
                printf("+%d", result[i]);
            else
                printf("+%dx^%d", result[i], i);
        }
    }
 
    getch();
    return 0;
}
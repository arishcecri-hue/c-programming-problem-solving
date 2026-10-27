
#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive number of rows.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++)
    {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

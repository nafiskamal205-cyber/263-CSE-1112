// Program to delete a number from a specified position in an array
#include <stdio.h>
int main()
{
    int n, i, pos;  
    int a[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);  
    }

    printf("Enter position: ");
    scanf("%d", &pos);
    if(pos < 0 || pos >= n)
    {
        printf("Invalid position!");
    }
    else
    {
        for(i = pos; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }

        n--;

        for(i = 0; i < n; i++)
        {
            printf("%d ", a[i]);  
        }
    }

    return 0;
}

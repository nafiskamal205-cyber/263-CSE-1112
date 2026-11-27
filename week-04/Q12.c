// Program to insert a number at a specified position in an array
#include <stdio.h>
int main()
{
    int n, i, num, pos;  
    int a[100];  

    printf("Enter the number of elements: ");
    scanf("%d", &n);  

    printf("Enter %d integers: ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);  
    }

    printf("Enter number: ");
    scanf("%d", &num);  

    printf("Enter position: ");
    scanf("%d", &pos);  

    if(pos < 0 || pos > n || n >= 100)
    {
        printf("Invalid position or array size!");
    }
    else
    {
        for(i = n; i > pos; i--)
        {
            a[i] = a[i - 1];  
        }

        a[pos] = num;  

        for(i = 0; i <= n; i++)
        {
            printf("%d ", a[i]); 
        }
    }

    return 0;
}


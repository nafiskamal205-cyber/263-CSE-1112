// Program to search a number in an array and print its index
#include <stdio.h>
int main()
{
    int n, i, num, found = 0;  
    int a[100];  

    printf("Enter the number of elements: ");
    scanf("%d", &n); 

    printf("Enter %d integers: ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);  
    }

    printf("Enter the number to search: ");
    scanf("%d", &num);  

    for(i = 0; i < n; i++)
    {
        if(a[i] == num)
        {
            if(found == 0)
            {
                printf("FOUND at index position: ");
            }

            printf("%d", i);  
            found = 1;

            if(i < n - 1)
            {
                int j, more = 0;

                for(j = i + 1; j < n; j++)
                {
                    if(a[j] == num)
                    {
                        more = 1;
                        break;
                    }
                }

                if(more == 1)
                    printf(", ");
            }
        }
    }
    if(found == 0)
    {
        printf("NOT FOUND");
    }
    return 0;
}

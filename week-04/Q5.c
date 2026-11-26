// Program to find the sum of all even indexed integers in an array
#include <stdio.h>
int main()
{
    int n, i, sum = 0;  
    int a[100];         

    printf("Enter the number of elements: ");
    scanf("%d", &n);  

    printf("Enter %d integers: ", n);

    for(i = 0; i < n; i++)  
    {
        scanf("%d", &a[i]);  
    }

    for(i = 0; i < n; i++)  
    {
        if(i % 2 == 0)  
        {
            sum = sum + a[i]; 
        }
    }
    printf("Sum of even indexed integers = %d\n", sum);
    return 0;
}

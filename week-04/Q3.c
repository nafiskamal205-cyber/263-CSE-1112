// Program to find the sum of all even integers in an array
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
        if(a[i] % 2 == 0)  
        {
            sum = sum + a[i];  
        }
    }
    printf("Sum of even integers = %d\n", sum);  
    return 0;
}

// Program to copy array A into array B in reverse order
#include <stdio.h>
int main()
{
    int n, i;  
    int A[100], B[100];  

    printf("Enter the number of elements: ");
    scanf("%d", &n);  

    printf("Enter %d integers: ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);  
    }

    for(i = 0; i < n; i++)
    {
        B[i] = A[n - 1 - i];  
    }

    printf("Array A : ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", A[i]);  
    }

    printf("\nArray B : ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", B[i]);  
    }
    return 0;
}

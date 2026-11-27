
// Program to copy array A into array B in reverse order

#include <stdio.h>

int main()
{
    int n, i;  // declare variables
    int A[100], B[100];  // declare two arrays

    printf("Enter the number of elements: ");
    scanf("%d", &n);  // take array size

    printf("Enter %d integers: ", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);  // take array elements
    }

    for(i = 0; i < n; i++)
    {
        B[i] = A[n - 1 - i];  // copy in reverse order
    }

    printf("Array A : ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", A[i]);  // display array A
    }

    printf("\nArray B : ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", B[i]);  // display array B
    }

    return 0;
}

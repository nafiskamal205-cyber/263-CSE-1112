// Program to swap all elements between two arrays
#include <stdio.h>
int main()
{
    int n, m, i;  
    int t = n;
    int A[100], B[100], temp[100];  

    printf("Enter the number of elements in A: ");
    scanf("%d", &n);  

    printf("Enter elements of A: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);  
    }

    printf("Enter the number of elements in B: ");
    scanf("%d", &m);

    printf("Enter elements of B: ");
    for(i = 0; i < m; i++)
    {
        scanf("%d", &B[i]); 
    }

    for(i = 0; i < n; i++)
    {
        temp[i] = A[i];
    }

    for(i = 0; i < m; i++)
    {
        A[i] = B[i];
    }

    for(i = 0; i < n; i++)
    {
        B[i] = temp[i];
    }
     n = m;
     m = t;
     printf("Array A : ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", A[i]);  
    }

    printf("\nArray B : ");
    for(i = 0; i < m; i++)
    {
        printf("%d ", B[i]);  
    }
    return 0;
}

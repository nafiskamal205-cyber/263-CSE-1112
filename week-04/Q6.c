
// Program to add two arrays and store the sum in a third array
#include <stdio.h>
int main()
{
    int n, i;  
    int A[100], B[100], C[100]; 

    printf("Enter the number of elements: ");
    scanf("%d", &n);  

    printf("Enter elements of first array: ");

    for(i = 0; i < n; i++)  
    {
        scanf("%d", &A[i]);  
    }
    printf("Enter elements of second array: ");
    for(i = 0; i < n; i++)  
    {
        scanf("%d", &B[i]);  
    }

    for(i = 0; i < n; i++)  
    {
        C[i] = A[i] + B[i];  
    }

    printf("Output data: ");
    for(i = 0; i < n; i++)  
    {
        printf("%d ", C[i]);  
    }
    return 0;
}

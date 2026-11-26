// Program to find the average of floating point numbers in an array
#include <stdio.h>
int main()
{
    int n, i;           /
    float a[100], sum = 0, average;  

    printf("Enter the number of elements: ");
    scanf("%d", &n);  

    printf("Enter %d floating point numbers: ", n);

    for(i = 0; i < n; i++)  
    {
        scanf("%f", &a[i]);  
        sum = sum + a[i];    
    }
    average = sum / n;  
    printf("Average = %.2f\n", average);  
    return 0;
}

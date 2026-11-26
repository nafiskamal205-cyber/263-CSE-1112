
// Program to find the maximum element and its index in an array
#include <stdio.h>
int main()
{
    int n, i, max, index;  
    int a[100];  

    printf("Enter the number of elements: ");
    scanf("%d", &n);  

    printf("Enter %d integers: ", n);
    for(i = 0; i < n; i++)  
    {
        scanf("%d", &a[i]);  
    }

    max = a[0];  
    index = 0; 
    for(i = 1; i < n; i++)  
    {
        if(a[i] > max)  
        {
            max = a[i]; 
            index = i;  
        }
    }
    printf("Max: %d, Index: %d\n", max, index);
    return 0;
}

// Program to replace all elements at odd indices with 0 in an array
#include <stdio.h>
int main()
{
    int n, i, A[100]; 

    printf("Enter N: "); 
    scanf("%d",&n); 

    for(i=0; i<n; i++) 
    {
        scanf("%d",&A[i]); 
    }
    for(i=0; i<n; i++) 
    {
        if(i%2!=0) 
        {
            A[i]=0; 
        }
    }
    for(i=0; i<n; i++) 
    {
        printf("%d ",A[i]); 
    }
    return 0;
}

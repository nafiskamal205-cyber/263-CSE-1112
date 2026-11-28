// Program to replace all integers divisible by 3 with -1 in an array
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
        if(A[i]%3==0) 
        {
            A[i]=-1; 
        }
    }
    for(i=0; i<n; i++) 
    {
        printf("%d ",A[i]); 
    }
    return 0;
}

// Program to find the difference of two arrays (A - B)
#include <stdio.h>
int main()
{
    int n, m, i, j, A[100], B[100], found; 

    printf("Enter size of A: "); 
    scanf("%d",&n); 

    for(i=0; i<n; i++) 
    {
        scanf("%d",&A[i]); 
    }

    printf("Enter size of B: "); 
    scanf("%d",&m); 

    for(i=0; i<m; i++) 
    {
        scanf("%d",&B[i]); 
    }

    for(i=0; i<n; i++) 
    {
        found=0; 

        for(j=0; j<m; j++) 
        {
            if(A[i]==B[j]) 
            {
                found=1; 
                break; 
            }
        }

        if(found==0) 
        {
            printf("%d ",A[i]); 
        }
    }
    return 0;
}

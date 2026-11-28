// Program to find the intersection of two arrays
#include <stdio.h>
int main()
{
    int n, m, i, j, k, A[100], B[100], found=0; 

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
        for(j=0; j<m; j++) 
        {
            if(A[i]==B[j]) 
            {
                for(k=0; k<i; k++) 
                {
                    if(A[k]==A[i])
                    {
                        break;
                    }
                }

                if(k==i) 
                {
                    printf("%d ",A[i]); 
                    found=1; 
                }

                break; 
            }
        }
    }

    if(found==0) 
    {
        printf("Empty set"); 
    }

    return 0;
}

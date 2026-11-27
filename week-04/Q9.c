// Program to count the number of vowels in an array
#include <stdio.h>
int main()
{
    int n, count = 0, i;  
    char a[100];  

    printf("Enter the number of alphabets: ");
    scanf("%d", &n);  

    printf("Enter %d alphabets: ", n);
    for(i = 0; i < n; i++)
    {
        scanf(" %c", &a[i]);  
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] == 'A' || a[i] == 'E' || a[i] == 'I' ||
           a[i] == 'O' || a[i] == 'U' ||
           a[i] == 'a' || a[i] == 'e' || a[i] == 'i' ||
           a[i] == 'o' || a[i] == 'u')
        {
            count++;
        }
    }
    printf("Count: %d\n", count); 
    return 0;
}

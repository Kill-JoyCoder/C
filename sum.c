/*
1. Get an array and a target sum from the user
2. Find any two elements from that array that add up to the target sum
3. Print YES or NO depending upon the result
*/

#include <stdio.h>

void main()
{
    int n, sumtarget, c=0;
    printf("Enter the size of the dataset\n");
    scanf("%d",&n);
    printf("Enter the target\n");
    scanf("%d",&sumtarget);
    int ar[n], r[2];
    printf("Enter the array \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
        for(int j=0; j<i; j++)
        {
            if(ar[i]+ar[j]==sumtarget){
                r[0] = ar[i];
                r[1] = ar[j]; 
                c = 1;
            }
                        
        }
    }
    if(c)
        printf("YES\n%d and %d",r[0],r[1]);
    else
        printf("NO\n");
    
}
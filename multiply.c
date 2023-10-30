#include <stdio.h>
void main()
{
    int n1,n2,k1,k2;
    printf("Enter row and column size for array 1\n");
    scanf("%d %d",&n1,&k1);
    printf("Enter row and column size for array 2\n");
    scanf("%d %d",&n2,&k2);
    printf("Enter elements of array 1\n");
    int a1[n1][k1], a2[n2][k2];
    for (int i=0; i<n1; i++)
    {
        for (int j=0; j<k1; j++){
            scanf("%d ",&a1[i][j]);}
        
    }
    printf("\n");
    printf("Enter elements of array 2\n");
    for (int i=0; i<n2; i++)
    {
        for (int j=0; j<k2; j++){
            scanf("%d",&a2[i][j]);}
        
    }
    printf("\n");

    printf("function works\n");

    printf("Entered array 1\n");
    for (int i=0; i<n1; i++)
    {                                  // ARRAY ENTRY CHECKED :D
        for (int j=0; j<k1; j++)
            printf("%d\t",a1[i][j]);
        printf("\n");
    }

    printf("Entered array 2\n");
    for (int i=0; i<n2; i++)
    {                                  // ARRAY ENTRY CHECKED :D
        for (int j=0; j<k2; j++)
            printf("%d\t",a2[i][j]);
        printf("\n");
    }
}

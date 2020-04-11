#include <stdio.h>
int main()
{
    int m,n,j,i;
    int arr[10][10];
    int transpose[10][10];
    printf("Enter number of rows [<=10] : ");
    scanf("%d",&m);
    printf("Enter number of columns [<=10]  : ");
    scanf("%d",&n);
    printf("Enter the elements ;\n");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&arr[i][j]);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
           transpose[j][i]=arr[i][j];
    printf("The transpose matrix is ;\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            printf("%d  ",transpose[i][j]);
        printf("\n");
    }
    return 0;

}

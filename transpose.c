#include <stdio.h>
int main()
{
    int m,n;
    int arr[5][5];
    int transpose[5][5];
    printf("Enter mxn : ");
    scanf("%dx%d",&m,&n);
    printf("Enter the elements ;\n");
    int t=0,j,i;
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
